//Going off the 101 lecture from Arthur, 8/5/17
//10.140.30.163 is our ip of our pi
//left motor = 1, right motor = 2

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "E101.h"

//constants
#define THRESHOLD = 80;
#define GATE_DIST = 0;
const char *IP = "192.168.0.0"; //stores the IP of the server
const char *PASSWORD = "123456"; //password for the

//things for networking
extern "C" int init(int d_lev);
extern "C" int connect_to_server( char server_addr[15],int port);
extern "C" int send_to_server(char message[24]);
extern "C" int receive_from_server(char message[24]);
extern "C" int read_analog(int ch_adc); 

int quadrant = 1; //stores the number of the current quadrant

/**
 * returns the ir reading for the distance to the gate
 */
int distance_to_gate(){
	int distance;
	distance = read_analog(0); //ir is at A0
	return distance;
}

/**
 * will use the camera to try and find the line
 * will call the move method
 */ 
void find_line(){
	take_picture();
	char pix[320];
	
	int err = 0;
	int nwp = 0;//Number of white pixels
	
	for (int i=0; i<320; i++){
		pix[i] = get_pixel(120, i, 3);
		if (pix[i] > THRESHOLD){ //therefore white pixel
			pix[i] = 1;
		} else {
			pix[i] = 0;
		}
	}
	for (int i=0; i<320; i++){
		if (pix[i] == 1){
			err = err + (i-160);
			nwp++;
		}
		
		if (nwp != 0){
			err = err/nwp;
			move(err);
		} else {
			back();
		}
	}
}

/**
 * moves the robot depending on the distance
 * from the line
 */
void move(int err){
	//Move towards the white line
	int speedLeft;
	int speedRight;
	double sc; //scale
	sc = 1; //for now, havent implemented it yet
	
	speedLeft = 80 + (int)((double)err*sc);//+ and - might be different depending on how the motors are connected
	speedRight = 80 - (int)((double)err*sc);
	
	set_motor(1, speedLeft); 
	set_motor(2, speedRight * -1); //right so must move in -ve direction
	sleep1(0, 100000);
}

/**
 * Returns true if the gate has been opened
 */
bool open_gate() {
	connect_to_server("192.168.1.2", 1024);
	send_to_server(PASSWORD);
	
	char message[24]; //message from server
   	receive_from_server(message); //this may be buggy!
   	printf("From Server: %s\n", message);
   	
   	if(message == "") { //we have opened the gate
		sleep1(2, 0); //make sure the gate has opened fully
		printf("GATE OPENED\n");
		
		return true;
	} else {
		printf("ERROR, GATE NOT OPEN\n");	
		
		return false;
	}
}

/**
 * Checks to see if the line is completely white
 * in which case we are in quad3
 */
 bool is_full_white_line() {
    take_picture();
	char pix[320];
	int nwp = 0; //Number of white pixels
	
	for (int i=0; i<320; i++){
		pix[i] = get_pixel(120, i, 3);
		if (pix[i] > THRESHOLD){ //therefore white pixel
			nwp++;
		}
	}
    
    if(nwp > 270) { //may need to change this value
        return true;
    } else {
        return false;
    }
    
}

/**
 * Moves the robot back a bit when we cant find the line
 */
void back(){
	//Error correcting by moving backwards if the whiteline cannot be found until one is found
	set_motor(1, -50); //back so -ve left motor
	set_motor(2, 50);
	sleep1(0, 200000); //0.2 sec
}


//MAIN QUADRANT METHODS

/**
 * The quadrant 1 code
 */
void quadrant1() {
	if(distance_to_gate() < GATE_DIST) {
		if(open_gate()) { //try to open the gate
			quadrant = 2;
		}
    } else {
		find_line();
	}
}

/**
 * The quadrant 2 code 
 */
 void quadrant2() {
	 find_line();
}

/**
 * Main method
 */
int main(){
	printf("My process ID : %d\n\n", getpid()); //for if we need to stop the process
	
    init();
    sleep1(0, 1000); //sleep a bit
    
    while(true) {
		if(quadrant == 1) { //do quadrant 1
			printf("	STARTING QUAD1\n");
			quadrant1();
		} else if(quadrant == 2) {
			printf("	STARTING QUAD2\n");
			quadrant2();	
		}
	}
    
    return 0;
}

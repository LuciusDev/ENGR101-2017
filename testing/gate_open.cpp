#include <stdio.h>
#include <time.h>
#include "E101.h"

int main() {
    init();
    sleep1(0, 1000);
    
    char pw[] = "Please";
    char ip[] = "130.195.6.196";
    char mts[7];
    int port = 1024;

    connect_to_server(ip, port);
	send_to_server(pw); //send a random string to server
	
	char message[24]; //message from server
   	receive_from_server(message); //this may be buggy!
   	printf("From Server: %s\n", message);
    
    for(int i = 0; i < 6; i++) {
        mts[i] = message[i];
    }
    
    mts[6] = 0;
    printf(mts);
    send_to_server(mts);
    
    return 0;
}

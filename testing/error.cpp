#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "E101.h"

int main() {
    init();
    
    char pix[320];
    int err = 0;
    
    while(true) {
        take_picture();
        for(int i = 0; i<320; i++) {
            char[i] = get_pixel(120, i, 3);
            
            if(char[i] > 80) {
                char[i] = 1;
                err = err + (i-160);
            } else {
                char[i] = 0;
            }
        }
        
        printf("%d\n", err);
        sleep1(0, 500000);
    }
    
    return 0;    
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char mark1[10][10]; //, mark2[10], mark3[10], mark4[10];

int main(){

    // ball is z zero character and needs to appear to rise on the screen then fall...
    // let's try working with 3 lines, screen clear between the runs
    int i = 0;
    float yy = 1;

    strcpy(mark1[1], "0^^^");
    strcpy(mark1[2], "_0^^");
    strcpy(mark1[3], "__0^");
    strcpy(mark1[4], "___0");

    system("clear");
    for (i = 1; i < 5; i++){
        //put the ball in 4 positions...

        sleep(yy);
        system("clear");
        fflush(stdout);
        printf("\r            ");
        printf("\%s   ", mark1[i]);
        printf("\n           ");
        
    }


    return 0;
}
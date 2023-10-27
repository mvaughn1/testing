#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){

// ball is z zero character and needs to appear to rise on the screen then fall...

int i = 0;
float yy = 0.5;
 char mark1[4][10] = {"0---","-0--", "--0-", "---0"};
system("clear");
for (i = 0; i < 4; i++){
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
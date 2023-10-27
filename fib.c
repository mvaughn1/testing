#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

// where is memo ???
double long Fm[500];
clock_t tm; // to calc compute time

int Fib(int fcount){
    
    int count;
    int i;
    
    tm = clock();  //start timer...

    // check if this is already calculated...
    if ((Fm[fcount - 1]) < 1) {     // not done yet
        Fm[0] = 0;
        Fm[1] = 1;
        
        for (i = 2; i < fcount; i++){

            Fm[i] = (Fm[i - 2]) + (Fm[i-1]);
        }
        //char buffIt[] = "test";
    }
        tm = clock() - tm;
        double time_taken = ((double)tm)/CLOCKS_PER_SEC; // calculate the elapsed time
        printf("The program took %f seconds to execute", time_taken);

    printf("Here are %i Fibs:\n", fcount);
    for (i = 0; i < fcount; i++) {
        //itoa((int)Fm[i], buffIt, 10);
        printf("Fib[%d] is %llu \n", i, (unsigned long long) Fm[i]);
    }
    return 0 ;
}
int main(){
    int totalFibs = 0;
    printf("\nHow many Fibs? ( < 90)\n");
    scanf("%i", &totalFibs);
    
    if (totalFibs < 90){
        Fib(totalFibs);
    }
    else {
        printf("\n you messed up.");
        return 0;
    }

    printf("\nsecond time through, enter Fibs!\n\n");
    totalFibs = 0;  //reset
    scanf("%i", &totalFibs);
    if (totalFibs < 90){
        Fib(totalFibs);
    }
    else {
        printf("\n you messed up.");
        return 0;
    }

return 0;
}
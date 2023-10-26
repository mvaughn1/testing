#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


int Fib(int fcount){
    double long Fm[fcount];
    int count;
    int i;
    
    Fm[0] = 0;
    Fm[1] = 1;
    
    for (i = 2; i < fcount; i++){

        Fm[i] = (Fm[i - 2]) + (Fm[i-1]);
    }
    //char buffIt[] = "test";
   
    printf("Here are %i Fibs:\n", fcount);
    for (i = 0; i < fcount; i++) {
        //itoa((int)Fm[i], buffIt, 10);
        printf("Fib[%d] is %d \n", i, (int32_t) Fm[i]);
    }
    return 0 ;
}
int main(){
    int totalFibs = 0;
    printf("\nHow many Fibs?\n");
    scanf("%i", &totalFibs);

    Fib(totalFibs);

return 0;
}
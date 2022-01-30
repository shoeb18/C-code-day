
//? question 13:
//* make a program to print odd numbers under 100 

#include <stdio.h>

int main(){

    for (int i = 1; i <= 100; i++)
    {
        if(i%2 == 0){
            continue;
        }
        printf("The odd number is %d\n", i);
    }
    

    
    return 0;
}
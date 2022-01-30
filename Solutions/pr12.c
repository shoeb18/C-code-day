//? question 12:
//* make a program to print even numbers under 100 



#include <stdio.h>

int main(){

for (int i = 1; i <= 100; i++)
{
    if(i%2 == 0)
    {
        printf("The even number is %d \n", i);
    }
}

    
    return 0;
}
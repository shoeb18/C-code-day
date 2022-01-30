
//? question 17:
//* write a recursive function to calculate the factorial of user input number


#include <stdio.h>

int factorial(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(){

    int n;
    printf("Enter the number \n");
    scanf("%d", &n);

    int res = factorial(n);
    printf("The factorial of %d is %d\n", n, res);

    return 0;
}
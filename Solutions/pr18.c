//? question 18:
//* write a recursive function to calculate the sum first n natural numbers
// like input = 5 = 5+4+3+2+1 = 15 

#include <stdio.h>




int sum(int n)
{
    if ( n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main(){

    int a;

    printf("Enter the number");
    scanf("%d",&a);

    int v = sum(a);

    printf("The total sum value is : %d\n",v);

    return 0;
}
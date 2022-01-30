//? question 22:
//* create an array 10 integers and store multiplication table of given number and display it


#include <stdio.h>

int main(){

    int multi[10];

    int n;
    printf("Enter the number");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        multi[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, (i + 1), multi[i]);
    }
    

    return 0;
}
//? question 20:
//* create an array of size 5 and store 5 student marks and display it (note: don't use loops)

#include <stdio.h>

int main(){
 

    int student[5];
 
    printf("Enter the marks of student 1 : ");
    scanf("%d",&student[0]);

    printf("Enter the marks of student 2 : ");
    scanf("%d",&student[1]);
 
    printf("Enter the marks of student 3 : ");
    scanf("%d",&student[2]);

    printf("Enter the marks of student 4 : ");
    scanf("%d",&student[3]);

    printf("Enter the marks of student 5 : ");
    scanf("%d",&student[4]);

    printf("The student 1 marks is %d\n", student[0]);
    printf("The student 2 marks is %d\n", student[1]);
    printf("The student 3 marks is %d\n", student[2]);
    printf("The student 4 marks is %d\n", student[3]);
    printf("The student 5 marks is %d\n", student[4]);

    return 0;
}
//? question 6:
//* make a program to input student marks in 3 subjects and calculate percentage
//* and make perfect percentage calculator and display student pass or fail
//* minimum total percentage is 35 and each subject need 35 marks to pass

#include <stdio.h> 
int main()
{

    int subject1;
    int subject2;
    int subject3;

    printf("Enter The marks of subject 1 : ");
    scanf("%d", &subject1);
    printf("Enter The marks of subject 2 : ");
    scanf("%d", &subject2);
    printf("Enter The marks of subject 3 : ");
    scanf("%d", &subject3);

    float total = (subject1 + subject2 + subject3) / 3.0;

    printf("Your percentage is %.2f%%\n", total);

    if (total >= 35 && subject1 >= 35 && subject2 >=35 && subject3 >=35)
    {
        printf("congratulation! your are pass\n");
    }
    else
    {
        printf("Sorry! you are fail better luck next time\n");
    }

    return 0;
}
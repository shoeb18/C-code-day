//? question 24: 
//* Make a 2d array of size 3X3 and store every student 3 types of sports marks out of 10 in it and finally display all


#include <stdio.h>

int main(){

    int score[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the student %d score in game no %d : ",(i+1),(j+1));
            scanf("%d", &score[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The score of %d student in %d game is %d\n", (i + 1), (j + 1), score[i][j]);
        }
        
    }
    

        return 0;
}



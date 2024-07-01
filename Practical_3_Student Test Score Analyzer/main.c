#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

#define student 5
#define score 1
//Initialize i student by i, score by j and choice for the type of operation
int i, j;
char choice;
int array[student][score];
int main(void)
{
    //Create 2D-array to accept inputs from user associated to marks of students
    for (i=0; i<student; i++)
    {
       for(j=0; j<score; j++)
       {
           printf("What is student number %d mark for the test: ", i);
           scanf("%d", &array[i][j]);
       }
    }
    printf("\n");

    //Ask user what operation they would like to be done to the array of marks
    printf("\nWhat would you like to find out:\na-mean\nb-standard deviation\nc-maximum score\nd-minumum score\nI choose: ");
    scanf(" %c", &choice);

    //Assign values to each 'choice'
    if (choice =='a')
    {
        mean();
    }

    else if (choice == 'b')
    {
        standard_deviation();
    }
    else if (choice == 'c')
    {
        highest();
    }
    else if (choice == 'd')
    {
        lowest();
    }
}

float sum=0;
//Create functions for each operation
void mean()
{
    for (i=0; i<student; i++)
        {
            for (j=0; j<score; j++)
            {
                sum+= array[i][j];
            }
        }
        float mean = sum/student;
        printf("\nThe mean is: %.3f", mean);
}

void standard_deviation()
{
    for (i=0; i<student; i++)
        {
            for (j=0; j<score; j++)
            {
                sum+= array[i][j];
            }
        }
        float mean = sum/student;
        printf("\nThe mean is: %.3f", mean);
        float sum= pow((array[0][0]-mean), 2) + pow((array[1][0]-mean), 2) + pow((array[2][0]-mean), 2) + pow((array[3][0]-mean), 2) + pow((array[4][0]-mean), 2);
        float standard_d= sqrt(sum/5);
        printf("\nThe standard deviation is: %.3f", sum);
}

 void highest()
 {
     int max=array[0][0];
        for (i=0; i<student; i++)
        {
            for (j=0; j<score; j++)
                if (array[i][j]>=max)
                {
                    max=array[i][j];
                }
        }
        printf("The highest value is %d", max);
 }

 void lowest()
 {
     int min=array[0][0];
        for (i=0; i<student; i++)
        {
            for (j=0; j<score; j++)
                if (array[i][j]<=min)
                {
                    min=array[i][j];
                }
        }
        printf("The lowest value is %d", min);
 }

#include<stdio.h>
int main()
{

    /*Write a C program that reads an integer and checks the specified range to which it belongs.
     Print an error message if the number is negative and greater than 80*/


        int value;
        printf("Enter the value of integer: ");
        scanf("%d", &value);

        if (value>=0 && value<=20)
        {
            printf("renge[0,20]\n");
        }

        else if (value>=21 && value<=40)
        {
            printf("renge[21,40]\n");
        }
        else if (value>=41 && value<=60)
        {
            printf("renge[41,60]\n");
        }

        else if (value>61 && value<=80)
        {
            printf("renge[60,80]\n");
        }


        else
        {
            printf("ERROR 404\n");
        }


    return 0;
}

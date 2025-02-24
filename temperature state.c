/*Write a C program to read temperature in centigrade
and display a suitable message according to the temperature state below:*/

#include<stdio.h>
int main()
{
    int temp;
    printf("enter temperature (in celcius):");
    scanf("%d",&temp);


    if (temp < 0)
    { 
      printf("Freezing weather\n");
    }
    else if (temp < 10)
    {
      printf("Very cold weather\n");
    }
    else if (temp < 20)
    {
      printf("Cold weather\n");
    }
    else if (temp < 30)
    { 
      printf("Normal in temp.\n");
    }
    else if (temp < 40)
    {
      printf("Its Hot\n");
    }
    else
    {
      printf("Its very hot\n");
    }

    return 0;
}




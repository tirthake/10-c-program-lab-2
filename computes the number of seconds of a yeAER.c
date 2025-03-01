//write the programme that computes the number of second of a year
#include<stdio.h>
int main()
{
    int year,second;
    printf("enter year number:");
    scanf("%d",&year);


    second=year*365*24*60*60;

    printf("year in second is :%d\n",second);

    return 0;
}

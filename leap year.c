#include<stdio.h>
int main()
{

    int year;
    printf("enter a year:");
    scanf("%d",&year);

    if(year%400==0)
        printf("leap year");
    else if (year%4==0 && year%100!=0) // that mean if year is modulas by 4 =0 and % by 100 is not equal to 0 is a leap year.
        printf("leap year");
    else
        printf("not leap year");
//ssukcessssssssssssss

 getch();
}

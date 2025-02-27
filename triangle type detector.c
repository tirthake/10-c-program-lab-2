#include<stdio.h>
int main()

{
    int a,b,c,result;
    printf("enter the value of a b c\n=");
    scanf("%d %d %d",&a,&b,&c);




    if(a+b>c|| a+c>b|| b+c>a)// check if its a real triangle value
    {

// nested  if
        if (a==b&&b==c)
        {
            printf("this triangle is Equilatereal");// 3 value are equal
        }

        else if (a==b||a==c||b==c)// check any two value are equal.
        {
            printf("this triangle is Isosceles");
        }
        else
        {
            printf("scalene triangle");// no value are equal
        }
    }
    else
    {
        printf(" value is not from valid triangle");// value is not from valid triangle
    }



    return 0;
}

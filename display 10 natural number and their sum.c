
#include <stdio.h>
int main()
{
    int i,sum=0;
    for (i=1; i<=10; i++) // natural number starts from 1 and it increase 1 every time 1.2.3.4....
    {
        printf(" 1st 10 natural number is :%d\t",i);// t is for tab type 
        sum = sum+i; // every time next sum is the previus sum+i
    }
    printf("\n the sum is:%d",sum);
    return 0;
}

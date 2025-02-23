
#include <stdio.h>
int main()
{
    int i,sum=0;
    for (i=1; i<=10; i++)
    {
        printf(" 1st 10 natural number is :%d\t",i);
        sum= sum+i;
    }
    printf("\n the sum is:%d",sum);
    return 0;
}

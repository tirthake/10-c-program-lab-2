#include<stdio.h>
int main()
{

    int a,b;
    char ch;

    printf("do you want to:");
    printf("Add, Subtract ,Multiply, or Division\n");
//........................DO.....WHILE................
    do
    {
        printf("enter first letter:");
        ch=getchar();
    }

    while (ch!='A'&& ch!='S'&&ch!='M'&& ch!='D');// ;  white condition ;
    {
        printf("\n");

    }

//............................TILL...........................

    printf("enter first number:");
    scanf("%d",&a);

    printf("enter second number:");
    scanf("%d",&b);


    if(ch=='A')
        printf("addition is %d",a+b);

    else if(ch=='S')
        printf("addition is %d",a-b);

     else if(ch=='M')
        printf("addition is %d",a*b);

   else  if(ch=='D'&& b!=0)
        printf("addition is %d",a/b);

else
    printf("input undefined");
    return 0;
}

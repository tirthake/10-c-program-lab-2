#include<stdio.h>
int main()
{

// palindrome number means reverse number remain the same as original. like 121/11

  
//..................... from here is  actual reverse number c code......
  
int number,r,temp, sum=0;
printf("enter the value of number:");// tqaking 121
scanf("%d",&number);
temp=number; //121



 while (temp!=0)//121=0
 {
     r=temp%10;//Rest =1
     sum=sum*10+r;//0+1=1
     temp=temp/10;// 121/10=12 ...  continue while loop until  temp!0

 }
  
  //..........................to here....................................

  
if (number==sum)// if yes
{
    printf("palindrome");

} else // if no
{
    printf("not palindrome");
    }

    return 0;
}

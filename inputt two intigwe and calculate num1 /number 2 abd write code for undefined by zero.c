#include<stdio.h>
int main()
{
int a,b;
  float result;
  printf("enter the value of a,b:");
  scanf("%d %d",&a,&b");
  result=a/b;
  if(b==0)
  {
    printf("undefined");
  }
  else 
  {
    printf("result is=%.2f",result");
  }


  return 0;
}

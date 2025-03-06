#include<stdio.h>
int main()
{
     double a,b;
     double product;
     int choice;
     double sum;

    printf("enter a: ");
    scanf(" %lf",&a);

    printf("enter b :");
    scanf(" %lf",&b);

    printf("1.sum\n");
    printf("2.product\n");

    printf("enter your choice:");
    scanf("%d",&choice);

    if(choice==1)
        {
            sum=a+b;
            printf(" sum is= %lf\n",sum);
    }

     else if (choice==2)
{
    product = a*b;
    printf("product is=%lf",product);
}
else
{
    printf("invalid choice\n");

}
    return 0;
}

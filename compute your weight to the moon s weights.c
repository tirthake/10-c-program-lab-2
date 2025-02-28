#include<stdio.h>
int main()
{
    float eweight,mweight;
    printf("enter your weight on earth:(KG)");
    scanf("%f",&eweight);
    //moon gravity is 17 parcent than earth
    //we know weight=g*m


    mweight =eweight*0.17;// moon weight = earth weight * 1/6
    printf("your weight in moon is :%f\n",mweight);
    return 0;
}

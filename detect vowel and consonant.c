
#include<stdio.h>
int main()
{

//Write a C program to check whether given  alphabet is a vowel or a consonant.
char alp;
printf("enter an alphabet:");
scanf("%c",&alp);


if (alp=='a'|| alp=='e'|| alp=='i'|| alp=='o'|| alp=='u'|| alp=='A' ||alp=='E' ||alp=='I' ||alp=='O' ||alp=='U')
//using or cz if any one of them true , condition true and it exicuted.
{
    printf("VOWEL\n");
}

else if(alp>='a'&&alp<='z'||alp>='A'&&alp<='Z') // first using && function cz if both are correct and then it work
                                                 // and we  again do or  within 4 condition , cz if any of them true function work
    
{
     printf("CONSONENT\n");
}

else{printf("this is not an alphabet.\n"); // if user did't input char 
}

    return 0;
}

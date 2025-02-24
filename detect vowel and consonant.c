
#include<stdio.h>
int main()
{

//Write a C program to check whether an alphabet is a vowel or a consonant.
char alp;
printf("enter an alphabet:");
scanf("%c",&alp);


if (alp=='a'|| alp=='e'|| alp=='i'|| alp=='o'|| alp=='u'|| alp=='I' ||alp=='E' ||alp=='I' ||alp=='O' ||alp=='U')

{
    printf("VOWEL\n");
}

else if(alp>='a'&&alp<='z'||alp>='A'&&alp<='Z')
{
     printf("CONSONENT\n");
}

else{printf("this is not an alphabet.\n");
}

    return 0;
}

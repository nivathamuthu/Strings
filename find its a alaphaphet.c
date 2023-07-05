#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int ch;

    printf("\nEnter a value:");
    scanf("%c",&ch);
    if((ch>='a'&&'z')||(ch>='A'&&'Z'))
    {
        printf("Its an alaphapets");

    }


    else if (ch>='0'&'9')
    {
        printf("its an numberical value");

    }
    else
    {
        printf("Its an special value");
    }
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char string[20],a[10];
    printf("enter a string:");
    scanf("%s\n",&string);
    printf("%s\n",string);
    strrev(string);
    printf("%s\n",string);
    }

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[10],str,rev[20],reverse[20];
    int i;
    printf("Enter  string 1:");
    scanf("%s",str1);
    int l=strlen(str1);
    printf("%d\n",l);
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",str1[i]);
    }
    if(str1==str1)
    {
        printf("\nPALINDROME");
    }
    else
        {
            printf("\nNOT A PALINDROME");

    }
}









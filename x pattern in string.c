#include<stdio.h>
#include<conio.h>
void main()
{
    int j,i,l;
    char n[20];
    printf("Enter a number:");
    scanf("%s",&n);
    l=strlen(n);
    for(i=0;i<=l;i++)
    {
        for(j=0;j<=l;j++)
        {
            if(j==i)
            {
                printf("%c",n[i]);
            }
            else if(j==l-i)
            {
                printf("%c",n[j]);

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
}

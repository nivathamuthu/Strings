#include<stdio.h>
#include<conio.h>
void main()
{

    int i,j,n;
    char s[20];
    scanf("%s",&s);
    n=strlen(s);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==j)
                printf("%c",s[i]);
                else if(j==n-i)
                     printf("%c",s[i]);
            else
                printf(" ");
        }
        printf("\n");
    }
}

#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int i,j,len,k,s;
    printf("Enter a string:");
    gets(str);
    len=strlen(str);
    printf("%d ",len);
    s=len-1;
    printf("%d\n",s);
    for(i=s;i>=0;i--)
    {
        if(str[i]==' '||i==0)
            {
                if(i==0)
                {

                    k=0;
                }
                else
                {
                    k=i+1;

                }
                for(j=k;j<=s;j++)
                {
                    printf("%c",str[j]);
                }
                s=i-1;
                printf(" ");
            }
            }
}

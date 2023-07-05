#include<stdio.h>
#include<conio.h>
void main()
{
    char n[20];
    int i,j,count,l;
    printf("\nEnter a string: ");
    scanf("%s",&n);
    strrev(n);
    printf("%s",n);
    l=strlen(n);
    printf("\n%d",l);
    for(i=0;i<l;i++)
    {
        count=0;
        for(j=i+1;j<l;j++)
        {
            if(n[i]==n[j])
            {
                count++;
            }

        }
        if(count==0)
        {
            printf("%c",n[i]);

        }
    }

}


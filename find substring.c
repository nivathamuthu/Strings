#include<stdio.h>
#include<conio.h>
void main()
{

    int l,i,j,c=0,count=0;
    char s1[20],s2[20];
    scanf("%s",&s1);
    scanf("%s",&s2);
    l=strlen(s2);

    for(i=0;s1[i]!='\0';i++)
    {
        for(j=0;s2[j]!='\0';j++)
        {
            if(s1[i]==s2[j])
            {
                c++;
            }
        }
    }



    printf("%d ",c);
    if(c==l)
    {
        printf("%d",i-j);
    }
    else
    {
        printf("-1");
    }


}




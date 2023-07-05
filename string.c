#include<stdio.h>
int main()
{
    char str[20];
    int s;
    printf("\n Enter the string:");
    scanf("%s",&str);
    printf("%c",str[0]);
    s=(str[0]+str[1]);
    printf("%d",s);


     if((str[0]+str[1])%2==0)
     {
     printf("true");
}
else
{
    printf("false");
}
}

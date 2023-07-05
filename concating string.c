#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[10],str2[20];
    printf("Enter  string 1:");
    scanf("%s",str1);
    printf("Enter  string 2:");
    scanf("%s",str2);
    strcat(str1,str2);
    printf("%s",str1);


}

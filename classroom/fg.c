#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[30],b[30],c[30];
    printf("Enter the first name  : ");
    scanf("%s",a);
    printf("Enter the middle name : ");
    scanf("%s",b);
    printf("Enter the surname : ");
    scanf("%s",c);
    printf("%s",strcat(b,c));
    return 0;
}
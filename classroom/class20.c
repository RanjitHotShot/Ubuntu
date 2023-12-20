/*To enter the name in the string array and print it*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[20],b[10],c[10];
    printf("Enter the address : ");
    scanf("%[^\n]s",a);
    printf("Enter the house number : ");
    scanf("%s",b);
    printf("Enter the colony name ");
    scanf("%[^\n]s",c);
    put(strncat(b,c,3));
    return 0;
}
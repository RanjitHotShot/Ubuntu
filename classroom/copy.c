#include<stdio.h>
#include<string.h>
void comp(char a[],char b[]);
int main()
{
    char a[30],b[30];
    printf("Entet the first string : ");
    fgets(a,30,stdin);
    printf("Enter the second string : ");
    fgets(b,30,stdin);
    comp(a,b);
    return 0;
}
void comp(char a[],char b[])
{
    int h=strcmp(a,b);
    if(h<0) printf("Second string is bigger.");
    else printf("First string is bigger.");
}
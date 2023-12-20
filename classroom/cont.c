#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("Enter the string : ");
    fgets(a,50,stdin);
    printf("%c",a[0]);
    for(int i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            printf("%c",a[i+1]);
        }
    }
    return 0;
}
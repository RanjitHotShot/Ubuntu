#include<stdio.h>
int main()
{
    int b;
    char ch[100];
    // printf("Enter the integer: ");
    // scanf("%d",&b);
    printf("Enter the string : ");
    fgets(ch,100,stdin);
    FILE *fptr;
    fptr=fopen("apple.txt","a");
    fprintf(fptr,"%s",ch);
    fclose(fptr);
    return 0;
}
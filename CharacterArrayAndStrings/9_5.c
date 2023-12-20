/*Rewriting a string in alphabetical order*/
//   RANJIT -->  AIJNRT
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    // int k=0;
    char str[10],apl[10],a[26];
    // for(int i='A';i<='Z';i++)
    // {
    //     a[k]=i;
    //     k++;
    // }
    // a[k]='\0';
    printf("Enter the string : ");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i+1;j<strlen(str);j++)
        {
            if(str[j]<=str[i])
            {
                int t=str[j];
                str[j]=str[i];
                str[i]=t;
            }
        }
    }
    printf("%s",str);
    return 0;
}
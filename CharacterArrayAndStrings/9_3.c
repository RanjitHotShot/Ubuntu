/*to extract a portion of the string entered*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100];
    printf("Enter the string : ");
    fgets(a,100,stdin);
    a[strcspn(a,"\n")]=0;
    char b[100];
    int m,n,k=0;
    printf("Enter the starting index : ");
    scanf("%d",&m);
    printf("%c\n",a[m-1]);
    printf("Enter the end index : ");
    scanf("%d",&n);
    printf("%c\n",a[n-1]);
    for(int i=m-1;i<n;i++)
    {
        b[k]=a[i];
        k++;
    }
    
    for(int i=m-1;i<n;i++)
    {
        printf("%c",b[i]);
    }          
    return 0;
}
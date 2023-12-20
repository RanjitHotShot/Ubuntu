/*To print the size in byte of each slot in the array*/
#include<stdio.h>
int main()
{
    int i,j,A[30],s,k,e,p;
    printf("Enter the size of the Array :");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        printf("%lu ",sizeof(A[i]));
    }
    return 0;
}
/*Hollow square*/
#include<stdio.h>
void pattern(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }   
}
void main()
{
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    pattern(n);
}
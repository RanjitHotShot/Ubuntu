#include<stdio.h>
int main()
{
    int i,j,r,s;
    printf("Enter the number of rows :");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(s=1;s<=(r-i);s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
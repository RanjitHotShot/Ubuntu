#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=i;s++)
        {
          printf(" ");//&
        }
        for (j=n--;j>=1;j--)
        {
            printf("* ");//%d j
        }
        printf("\n");
    }
    return 0;
}
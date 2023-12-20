/*To print the pattern in matrix*/
#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int n,m;  
    int a[30][30];
    printf("Enter the number of rows :");
    scanf("%d",&m);
    printf("Enter the number of columns :");
    scanf("%d",&n);
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if((i+j)>n-1)
            {
                printf("* ");
            }
            else if((i+j)<n-1)
            {
                printf("& ");
            }
            else
            {
                printf("-1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
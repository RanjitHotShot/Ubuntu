/*function to rotate the matrix in anticlock wise direcion*/
#include<stdio.h>
#include<stdlib.h>
void ROTATE(int a[][30],int transpose[][30],int m,int n);
int main()
{
    int a[30][30],m,n,transpose[30][30];
    printf("Enter the number of columns ");
    scanf("%d",&m);
    printf("Enter the number of rows ");
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the [%d][%d] element ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    ROTATE(a,transpose,m,n);
    return 0;
}
void ROTATE(int a[][30],int transpose[][30],int m,int n)
{
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<n; ++j) 
        {
            transpose[j][i] = a[i][j];
        }
    }
    int t;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i==0)
            {
                t =transpose[i][j];
                transpose[i][j]=transpose[m-1][j];
                transpose[m-1][j]=t;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}
/* To print the sum and product of two matrix */
#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int n,m,i,j,k,l,p,q;  
    int a[30][30],b[30][30],c[30][30],d[30][30];
    printf("Enter the number of rows :");
    scanf("%d",&m);
    printf("Enter the number of columns :");
    scanf("%d",&n);
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("Enter the [%d][%d]  element ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    // Print the matrix
    printf("The a mxn matrix is:\n");
    for (k=0;k<m;k++) 
    {
        for (l=0;l<n;l++)
        {
        	printf("%d  ",a[k][l]);
        }
        printf("\n");					
    }
    printf("Enter the number of rows of second matrix :");
    scanf("%d",&p);
    printf("Enter the number of columns of second matrix :"); 
    scanf("%d",&q);
    for (int i = 0; i < p; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            printf("Enter the [%d][%d] column element ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The b pxq matrix is:\n");
    for (int k=0;k<p;k++) 
    {
        for (int l=0;l<q;l++)
        {
        	printf("%d  ",b[k][l]);
        }
        printf("\n");					
    }
    if(m==p && n==q)
    {
        printf("The sum of matrix is :\n");
        for (int k=0;k<n;k++) 
        {
            for (int l=0;l<m;l++)
            {
                printf("%d ",d[k][l]=a[k][l]+b[k][l]);
            }
            printf("\n");					
        }
    }
    else
    {
        printf("Sum not possible");
    }
    if(n==q)
    {
        printf("The product of two matrix is :\n");
        for(int i=0;i<m;i++)//row set a 0 
        {
            for(int j=0;j<q;j++)//column set at 0
            {
                c[i][j]=0;
                for(int k=0;k<n;k++)//columns of c matrix
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for (int k=0;k<m;k++) 
        {
            for (int l=0;l<q;l++)
            {
                printf("%d ",c[k][l]);
            }
            printf("\n");					
        }
    } 
    else
    {
        printf("Product of two matrix not possible");
    }
    return 0;
}       
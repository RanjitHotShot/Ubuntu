/* To print a nxm matrix and printing it */
#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int n,m,i,j,k,l;  
    printf("Enter the number of rows :");
    scanf("%d",&n);
    printf("Enter the number of columns :");
    scanf("%d",&m);
    int a[n][m],b[n][m],c[n][m];
    printf("Enter elements of the nxm matrix:\n");
    for (i = 0; i < n; i++) 
    {
        printf("Enter the %d row element\n",i+1);
        for (j = 0; j < m; j++) 
        {
            printf("Enter the %d column element ",j+1);
            scanf("%d",&a[i][j]);
        }
    }
    // Print the matrix
    printf("The a[][] nxm matrix is:\n");
    for (k=0;k<n;k++) 
    {
        for (l=0;l<m;l++)
        {
        	printf("%d ",a[k][l]);
        }
        printf("\n");					
    }
    for (int i = 0; i < n; i++) 
    {
        printf("Enter the %d row element\n",i+1);
        for (int j = 0; j < m; j++) 
        {
            printf("Enter the %d column element ",j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The b[][] nxm matrix is:\n");
    for (int k=0;k<n;k++) 
    {
        for (int l=0;l<m;l++)
        {
        	printf("%d ",b[k][l]);
        }
        printf("\n");					
    }
    printf("The sum of matrix a and b is :\n");
    for (int k=0;k<n;k++) 
    {
        for (int l=0;l<m;l++)
        {
        	c[k][l]=a[k][l]+b[k][l];
        }					
    }
    for (int k=0;k<n;k++) 
    {
        for (int l=0;l<m;l++)
        {
        	printf("%d ",c[k][l]);
        }
        printf("\n");					
    }
    printf("The product of two matrix is :\n");
    for(int i=0;i<n;i++)//row set a 0 
    {
        for(int j=0;j<n;j++)//column set at 0
        {
            c[i][j]=0;
            for(int k=0;k<m;k++)//will go on till m-1
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for (int k=0;k<n;k++) 
    {
        for (int l=0;l<m;l++)
        {
        	printf("%d ",c[k][l]);
        }
        printf("\n");					
    }
    return 0;
}       
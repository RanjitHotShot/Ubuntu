/*To find the transpose of the matrix  */
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
    printf("The transpose of the matrix is :\n");
    for (k=0;k<m;k++) 
    {
        for (l=0;l<n;l++)
        {
        	printf("%d  ",a[l][k]);
        }
        printf("\n");					
    }
    return 0;
}
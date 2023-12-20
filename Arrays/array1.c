/*To enter the size of array and store elements in it the also print the elements stored & Print the sum of the elements in the array.*/
#include<stdio.h>
int main()
 {
    int i,k,j,sum=0,n;
    int A[30];
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&A[i]);   
    }
    for(k=0;k<n;k++)
    {
        printf("\nThe element in %d is : ",k+1);
        printf("%d",A[k]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+A[j];
    }
    printf("\nThe sum of numbers stored in the array is :%d",sum);
    return 0;
 }
/*To count all the dublicate elements in an array*/
#include<stdio.h>
int main()
{
    int a[30],i,j,k,c=0,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)//leave the first element because first element else it will become equal on it 
        {
            if(a[j]==a[k])
            {
                c++;
                break;
            }
        }
    }
    printf("The number of dublicate elements in the array is : %d",c);
    return 0;
}
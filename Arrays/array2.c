/*To show the other way of using array .printing the nth term in an array*/
#include<stdio.h>
int main()
{
    int n,A[6]={11,12,13,14,15,16};
    for(int i=0;i<6;i++)
    {
        printf("Element %d is : %d\n",i,A[i]);
    }
    printf("Enter the value to be displayed form the array :");
    scanf("%d",&n);
    if(n<=5 && n>=0)
    {
        printf("%d",A[n]);
    }
    else
    {
        printf("Oops! Out of bounds");
    }
    return 0;
}
/*Sum of the following series */
#include <stdio.h>
int main()
{
    int n;
    float sum=0.0;
    printf("Enter the range :");
    scanf("%d",&n);
    int n1=n;
    printf("The sequence is :");
    for(int j=1;j<=n;j++)
    {
        printf("1/%d",j);
        if(j<n)
        {
            printf("+");
        }
    }
    for(float i=1.0;i<=n1;i++)
    {
        sum=sum+(1/i);
    }
    printf("\nThe sum of the series is : %.1f",sum);
    return 0;
}
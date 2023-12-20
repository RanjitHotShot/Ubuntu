/*Perfect number i.e. sum of all the factors of number is qqual to the number itself*/
#include<stdio.h>
void perfect(int a)
{
    int sum=0;
    int b=a;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(sum==b)
    {
        printf("PERFECT NUMBER");
    }
    else
    {
        printf("NOT PERFECT NUMBER");
    }
}
void main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    perfect(a);
}
#include<stdio.h>
int main()
{
    int n1,n2,gcd,lcm;
    printf("Enter the first number :");
    scanf("%d",&n1);
    printf("Enter the second number :");
    scanf("%d",&n2);
    if(n1>n2)
    {
        for(int i=1;i<=n1;i++)
        {
            if(n1%i==0 && n2%i==0)
            {
                gcd=i;
            }
        }
    }
    if(n2>n1)
    {
        for(int i=1;i<=n2;i++)
        {
            if(n1%i==0 && n2%i==0)
            {
                gcd=i;
            }
        }
    }
    lcm=(n1*n2)/gcd;
    printf("The lcm of two numbers is %d",lcm);
    return 0;
}
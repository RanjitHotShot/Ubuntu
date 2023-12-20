/*To print the binary equivalent of a decimal number */
#include<stdio.h>
int main()
{
	int a[30],n1,c=0,n,r,s;
	printf("Enter the decimal number :");
	scanf("%d",&n);
	n1=n;
    for(int i=0;i<=30;i++)
    {
        if(n!=0)
        {
            r=n%2;
            a[i]=r;
            n=n/2;
            c++;
        }
    }
    printf("%d\n",c);
    for(int j=c-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
}   
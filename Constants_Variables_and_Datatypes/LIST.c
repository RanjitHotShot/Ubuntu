/*To print price of articles */
#include<stdio.h>
int main()
{
    float r,s;
    printf("Enter the price of rice :");
    scanf("%f",&r);
    printf("Enter the price of sugar :");
    scanf("%f",&s);
    printf("***LIST OF ITEMS***\n");
    printf("Item        Price\n");
    printf("Rice        Rs %.2f\n",r);
    printf("Sugar       Rs %.2f",s);
    return 0;
}
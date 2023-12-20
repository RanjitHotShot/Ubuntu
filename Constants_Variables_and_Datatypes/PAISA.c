/*To convert money in rupees to notes*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the money :");
    scanf("%d",&n);
    int twothousand=n/2000;
    int r=n%2000;
    int fivehundred=r/500;
    int rr=r%500;
    int twohundred=rr/200;
    int rrr=rr%200;
    int hundred=rrr/100;
    int rrrr=rrr%100;
    int fifty=rrrr/50;
    int rrrrr=rrrr%50;
    int twenty=rrrrr/20;
    int rrrrrr=rrrrr%20;
    int ten=rrrrrr/10;
    int s=rrrrrr%10;
    int five=s/5;
    int ss=s%5;
    int two=ss/2;
    int sss=ss%2;
    int one=sss/1;
    printf(" 2000=%d :500=%d :200=%d :100=%d :50=%d :20=%d :10=%d :5=%d :2=%d :1=%d",twothousand,fivehundred,twohundred,hundred,fifty,twenty,ten,five,two,one);
    return 0;
}
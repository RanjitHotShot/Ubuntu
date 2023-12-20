/*days in to years weeks months */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the days ");
    scanf("%d",&n);
    int n1=n;
    int n2=n1;
    int years=n/365;
    int months=(n-(years*365))/30;
    int weeks=(n-(months*30)-(years*365))/7;
    int days=n-(weeks*7)-(months*30)-(years*365);
    printf("The given days in yy:mm:ww:dd is %d:%d:%d:%d \n",years,months,weeks,days);
    int year=n1/365;
    int r=n1%365;
    int month=r/30;
    int day=r%30;
    printf("The days if yy:mm:dd is %d:%d:%d \n",year,month,day);
    int y=n2/365;
    int rr=n2%365;
    int week=rr/7;
    int da=rr%7;
    printf("The days int yy:ww:dd is %d:%d:%d",y,week,da);
    return 0;
}
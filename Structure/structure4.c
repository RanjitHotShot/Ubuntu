#include <stdio.h>
#include <stdio.h> 
struct Time
{
    int hour;
    int min;
    int sec;
} s[2],d;
void main()
{
    for(int i=0;i<2;i++)
    {
    printf("Enter %d hour\n",i+1);
    scanf("%d",&s[i].hour);
    printf("Enter %d minute\n",i+1);
    scanf("%d",&s[i].min);
    printf("Enter %d second\n",i+1);
    scanf("%d",&s[i].sec);
    }
    d.hour=s[0].hour + s[1].hour;
    d.min=s[0].min + s[1].min;
    d.sec= s[0].sec + s[1].sec;
    if(d.sec>60)
    {
        d.sec=d.sec-60;
        d.min++;
    }
    if(d.min>60)
    {
        d.min=d.min-60;
        d.hour++;
    }
    printf ("      Hour       Minute      Second1\n");
    printf ("      %d         %d          %d  \n",s[0].hour,s[0].min,s[0].sec);
    printf ("      %d         %d          %d  \n",s[1].hour,s[1].min,s[1].sec);
    printf ("-------------------------------- \n");
    printf ("+ \n");
    printf ("      %d         %d          %d  ",d.hour,d.min,d.sec);

    
}
#include <stdio.h>
#include <stdio.h> 
struct Year
{
    int year;
    int month;
} s[2],d;
void main()
{
    for(int i=0;i<2;i++)
    {
    printf("Enter %d year\n",i+1);
    scanf("%d",&s[i].year);
    printf("Enter %d month\n",i+1);
    scanf("%d",&s[i].month);
    }
    d.year=s[0].year + s[1].year;
    d.month=s[0].month + s[1].month;
    if(d.month>12)
    {
        d.month=d.month-12;
        d.year++;
    }
    printf(" The first data is %d year %d month\n",s[0].year,s[0].month);
    printf("The second data is %d year %d month\n",s[1].year,s[1].month);
    printf("  The Resultant is %d year %d month",d.year,d.month);
}
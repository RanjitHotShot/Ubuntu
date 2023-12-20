/*Class students secured marks in subjects print the total mark of each student p*/
#include<stdio.h>
int main()
{
    int a[100][100],pos,c,n,m,roll,pos1,pos2,pos3;
    printf("Enter the number of students in class :");//rows
    scanf("%d",&m);
    printf("Enter the number of subjects :");//columns 
    scanf("%d",&n);
    for(int g=0;g<m;g++)
    {
        for(int h=0;h<n;h++)
        {
            printf("Enter the marks of [%d] subject of %d student ",h+1,g+1);
            scanf("%d",&a[g][h]);
        }
    }
    int tmax=0;
    int sub1max=a[0][0],sub2max=a[0][0],sub3max=a[0][0];
    for(int g=0;g<m;g++)
    {
        c=0;
        for(int h=0;h<n;h++)
        {
            c+=a[g][h];
        }
        int f=0;
        if(a[g][0]>sub1max)
        {
            sub1max=a[g][f];
            pos1=g;
        }
        f++;   
        if(a[g][1]>sub2max)
        {
            sub2max=a[g][f];
            pos2=g;
        }
        f++;
        if(a[g][2]>sub3max)
        {
            sub3max=a[g][f];
            pos3=g;
        }
        if(c>tmax)
        {
            tmax=c;
            pos=g;
        }
        printf("The total marks of %d student is : %d",g+1,c);
        printf("\n");
    }
    printf("The student %d has  maximum marks in first subject  %d \n ",pos1+1,sub1max);
    printf("The student %d has  maximum marks in second subject %d  \n",pos2+1,sub2max);
    printf("The student %d has  maximum marks in third subject %d  \n",pos3+1,sub3max);
    printf("The student %d has  maximum marks of %d , ",pos+1,tmax);
    return 0;
}
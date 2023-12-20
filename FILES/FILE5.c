#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("OddNUmber.txt","w");
    
    int a;
    printf("Enter the range :");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
            fprintf(fptr,"%d\t",i);
        }
    }
    //or
    // for(int i=0;i<a;i++)
    // {
    //     scanf("%d",&n);
    //     fprintf(fptr,"%d\t",n);
    // }
    fclose(fptr);
    return 0;
}
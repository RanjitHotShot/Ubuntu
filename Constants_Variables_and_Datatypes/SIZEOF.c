/*entering the values*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("The size of integer is : %u\n",sizeof(a));
    printf("%u\n",sizeof(short int));
    printf("%ld\n",sizeof(long int));
    a=123456;
    b=654321;
    short int z=a+b;
    printf("The value of a is : %d \n The value of b is : %d \n The value of z is : %hd ",a,b,z);
    return 0;
}
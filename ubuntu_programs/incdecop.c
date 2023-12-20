/* To see the use of increment and decrement operators(arithmatic operator)*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a\n :");
	scanf("%d",&a);
	printf(" a++ %d \n",a++);
	printf("++a %d \n",++a);
    printf("vaue of a after %d\n",a);
	printf("a-- %d \n",--a);
	printf("--a %d\n",a--);
	printf(" a %d \n",a);
	return 0;
}
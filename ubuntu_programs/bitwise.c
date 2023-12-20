/* bitwise */
#include<stdio.h>
int main()
{
	int a=1,b=2;
	printf("The result of a|b is %d \n",a|b);
	printf("The result of a^b is %d \n",a^b);
	printf("The result of a,~a is %d %d \n",a,~a);
	printf("The result of a>>2 is %d \n",a>>2);
	printf("The result of a<<2 is %d \n",a<<2);
	printf("The result of a&b is %d \n",a&b);
	//first it   converts decimal to binary then it compares 
	return 0;//and the the final binary value is again converted to delcimal and printed
}
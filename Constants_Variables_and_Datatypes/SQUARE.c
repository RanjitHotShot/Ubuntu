/*typedef*/
#include<stdio.h>
#include<math.h>
typedef int mark;
int main()
{
    mark engmark,mathmark,physicsmark,chemistrymark;
    chemistrymark=10;
    engmark=10;
    mathmark=10;
    physicsmark=10;
    int sum=engmark+mathmark+physicsmark+chemistrymark;
    printf("The sum of marks is : %d",sum);
    return 0;
}
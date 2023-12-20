#include <stdio.h>
#include <stdbool.h> 
#define PI 3.14159
int main()
{
    bool c=!(5+5>=10);
    bool s=5+5==10||1+3==5;
    bool d=5>10||10<20&&3<5;
    bool e=10!=15&&!(10<20)||15>30;
    printf("%d\n",c);
    printf("%d\n",s);
    printf("%d\n",d);
    printf("%d\n",e);

    return 0;
}
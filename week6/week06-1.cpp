#include <stdio.h>

int main()

{
    int a=999;
    int b=9;
    int temp;

    printf("a:%d b:%d\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("a:%d b:%d",a,b);
}

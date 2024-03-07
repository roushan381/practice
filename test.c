#include <stdio.h>

#define __UNUSED_VAR__ __attribute__(( unused ))

void abc(__UNUSED_VAR__ int a , int b)
{
    printf("Hello World abc %d\n",a+1);
}

int main()
{
    int b,c;
    b=10;
    c=20;
    abc(b,c);
    printf("Hello World");

    return 0;
}
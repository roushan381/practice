#include <stdio.h>
int a=10;
int main()
{
    a=20;
    printf("main %d\n",a);
    ab();
    printf("main %d\n",a);
    return 0;
}
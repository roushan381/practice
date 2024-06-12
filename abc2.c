#include <stdio.h>
int ab()
{
        extern int a;
        a=10;
        printf("ab %d\n",a);
    printf("ab %d\n",a);
    return 0;
}
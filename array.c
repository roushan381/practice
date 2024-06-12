/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#if 0
#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5,6};
    printf("Hello World %d : %d : %d \t",a[0],a[5],a[8]);

    return 0;
}
#else
#include <stdio.h>

int min(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        printf("min 1 value %d : %d\n",i,a[i]);
    }
    printf("\n");
    a[0]=a[0]+a[1];
    a[1]=a[0]-a[1];
    a[0]=a[0]-a[1];
    a[4]=20;
    
    for(int i=0; i<n;i++)
    {
        printf("min 2 value %d : %d\n",i,a[i]);
    }
}

int main()
{
    int a[5]={1,2,3,4,5};
    printf("Hello World %d\n",min(a,5));
    for(int i=0; i<5;i++)
    {
        printf("main 1value %d : %d\n",i,a[i]);
    }

    return 0;
}
#endif

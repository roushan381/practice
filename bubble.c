#include<stdio.h>
#include<stdlib.h>

void bubble(int a[], int n);
void swap(int *a, int *b);
int sorted_array=1;
int main()
{
    #if 0
    int a[5]={5,4,3,2,55};
    #else
    int a[5]={11,2,4,3,5};
    #endif
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        printf("before value %d\n",a[i]);
    }
    bubble(a, n);
    if(sorted_array)
        printf("already sorted\n");
    else
        printf("unsorted\n");
    for(int i=0;i<n;i++)
    {
        printf("after value %d\n",a[i]);
    }
    return 0;
}

void bubble(int a[], int n)
{
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-1-j;i++){
            if(a[i]>a[i+1]){
                swap(&a[i],&a[i+1]);
            }
        }
    }
}

void swap(int *a, int *b){
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
        sorted_array =0;
}
#include<stdio.h>
#include<stdlib.h>

void slection(int a[], int n);
void swap(int *a, int *b);
int sorted_array=1, lowest_index;
int main()
{
    int a[]={5,4,3,2,55,5,9,1};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        printf("before value %d\n",a[i]);
    }
    slection(a, n);
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

void slection(int a[], int n){
    for(int j=0;j<n-1;j++){
        lowest_index=j;
        for(int i=j+1;i<n;i++){
            if(a[lowest_index]>a[i]){
                lowest_index=i;
            }
        }
        if(lowest_index!=j)
            swap(&a[lowest_index],&a[j]);
    }
}
void swap(int *a, int *b){
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
        sorted_array =0;
}

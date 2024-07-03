#include<stdio.h>
#include<stdlib.h>

void bubble(int a[], int n);
int main()
{
    int a[5]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        printf("before value %d\n",a[i]);
    }
    bubble(a, n);
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
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
            }
        }
    }
}

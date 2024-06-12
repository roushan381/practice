#include <stdio.h>
int a=10;

typedef struct
{
    char name[30];
    const int age;
    /* here Address is a structure */
    struct
    {
        char locality[50];
        char city[50];
        int pincode;		
    }addr;
}Student_t;

typedef struct 
{
    int a;
}struct1;

int main()
{
    a=20;
    struct1 s2;
    // Student_t s1;
    Student_t s1={"a1",20,"home","blr",560000};
    // s1.age=10;
    printf("name %s\n",s1.name);
    printf("age %d\n",s1.age);
    // s1.age=30;
    // printf("age %d\n",s1.age);
    printf("loc %s\n",s1.addr.locality);
    printf("city %s\n",s1.addr.city);
    printf("pin %d\n",s1.addr.pincode);
    printf("size %d\n",sizeof(s1.name));

    // ab();
    // printf("main %d\n",a);
    return 0;
}
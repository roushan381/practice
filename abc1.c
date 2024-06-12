#include <stdio.h>
int a=10;

typedef struct Student
{
    char name[30];
    int age;
    /* here Address is a structure */
    struct Address
    {
        char locality[50];
        char city[50];
        int pincode;		
    }addr;
}Student_t;

int main()
{
    a=20;
    Student_t s1={"a1",20,"home","blr",560000};
    printf("name %s\n",s1.name);
    printf("age %d\n",s1.age);
    printf("loc %s\n",s1.addr.locality);
    printf("city %s\n",s1.addr.city);
    printf("pin %d\n",s1.addr.pincode);

    // ab();
    // printf("main %d\n",a);
    return 0;
}
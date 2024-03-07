#include <stdio.h>

struct A{
    int a; int b
;
};

struct B
{
    short a1 ,a2,b1,b2;
} ;

union structtest
{
    struct structtest1
    {
        unsigned char a:1;
        unsigned char b:1;
        unsigned char c:1;
        unsigned char d:1;
        unsigned char e:1;
        unsigned char f:1;
        unsigned char g:1;
        unsigned char h:1;
    }hello;
    unsigned char letter;
};

int main(int argc, char const *argv[])
{
    unsigned char t=0xf7; 
    union structtest magic;
    magic.letter=t;
   struct A abc= {0x11112222, 0x33334444};
   
   struct A * pabc=&abc;
   printf("%x %x  \n",pabc->a,pabc->b);
   struct B *b = (struct B*) (pabc);
   
   printf("%x %x  %x %x \n \n",b->a1,b->a2,b->b1,b->b2);
    printf("%x\n",magic.letter);
    printf("======================\n");
   printf("%x\n",magic.hello.a);
   printf("%x\n",magic.hello.b);
   printf("%x\n",magic.hello.c);
   printf("%x\n",magic.hello.d);
   printf("%x\n",magic.hello.e);
   printf("%x\n",magic.hello.f);
   printf("%x\n",magic.hello.g);
   printf("%x\n",magic.hello.h);
   magic.hello.h=1;
   printf("%x\n",magic.letter);
   
    return 0;
}

#include<stdio.h>

int len(char *str)
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char str[]="i have good friend";    
    //char str[]="";    
    printf("string lenght: %d\n",len(str));
    return 0;
}
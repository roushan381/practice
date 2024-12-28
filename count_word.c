#include<stdio.h>

int find_word(char *str)
{
    int len=0, i=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            len++;
        }
    }
    if(i==0){
        len=0;
    }else{
        len++;
    }
    return len;
}

int main(){
    char str[]="i have a good friend";
    printf("number of words: %d\n",find_word(str));
    return 0;
}
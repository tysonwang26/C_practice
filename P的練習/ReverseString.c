


/*
字串反轉 (Reverse String)
*/

#include <stdio.h>

void swap(char *a, char *b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverse(char *s, int size){
    for(int i=0; i<size/2; i++){
        printf("%c\n", s[size-i-1]);
        swap(&s[i], &s[size-i-1]);
    }
}

int main(){

    char s[] = "abc";
    int size = sizeof(s)/sizeof(s[0])-1;

    reverse(s, size);


    for(int i=0; i<size; i++){
        printf("%c ", s[i]);
    }

    return 0;
}
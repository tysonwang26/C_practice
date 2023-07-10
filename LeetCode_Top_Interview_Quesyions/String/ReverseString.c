#include <stdio.h>

void swap(char *a, char *b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    char s[] = {'h','e','l','l','o'};
    int size = sizeof(s)/sizeof(s[0]);
    printf("%d\n", size);

    for(int i=0; i<size/2; i++){
        printf("%d %d\n", i, size-1-i);
        // printf("%c", s[i]);
        swap(&s[i], &s[size - 1 - i]);
    }

    printf("\n");

    for(int i=0; i<size; i++){
        printf("%c ", s[i]);
    }

    return 0;
}
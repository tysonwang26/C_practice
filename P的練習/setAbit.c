
#include <stdio.h>

int main(){

    int a = 0b0001;

    // num = num|(1<<bit_position)
    a = a|(1<<2);
    printf("%d ", a);
}
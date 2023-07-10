
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    uint32_t n = 0b00000010100101000001111010011100;
    uint32_t total = 0;

    int index = 32-1;
    while(n>0){
        int low_b = ((n | 1) == n) ? 1 : 0;
        printf("%d %d\n", low_b, index);
        n = n >> 1;

        total += low_b * pow(2, index);
        index --;

    }
    printf("%d", total);
    return 0;
}
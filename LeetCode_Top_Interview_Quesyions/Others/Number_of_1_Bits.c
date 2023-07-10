#include <stdio.h>
#include <stdlib.h>

int main(){
    uint32_t n = 0b00000000000000000000000000001011;
    int counter = 0;
    while(n>0){
        if((n | 1) == n){
            counter++;
        }
        n = n>>1;
    }
    printf("%d", counter);
}
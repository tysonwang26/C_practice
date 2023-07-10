#include <stdio.h>

int main(){

    int num = 0b00001111;

    /// num = num XOR (1<<bit_position)
    num = num^(1<<0);

    printf("%d ", num);
    return 0;
}
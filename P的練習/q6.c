
/*
求一個數的最高位1在第幾位
*/

#include <stdio.h>

int main(){
    unsigned int input = 0b0000;

    int index = -1;
    while(input!=0){
        printf("%d ", index);
        input = input >> 1;
        index ++;
    }
    printf("\n%d ", index);
}
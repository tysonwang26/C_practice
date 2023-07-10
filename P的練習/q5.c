#include <stdio.h>
#include <math.h>

/*
求一個數的最高位數在第幾位
*/

int main(){

    int input = 15034;

    int tmp = input;
    int max_num = 0;
    int max_index = 0;
    for(int i=4; i>=0; i--){
        // printf("%f\n", pow(10, i));
        int a = tmp / pow(10, i);
        tmp -= a * pow(10, i);

        printf("%d ", a);
        if(a > max_num){
            max_num = a;
            max_index = i;
        }
    }

    printf("\n%d in index:%d ", max_num, max_index+1);
    return 0;
}
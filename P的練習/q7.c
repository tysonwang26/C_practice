
/*
最大公因數 遞迴寫法
*/

#include <stdio.h>

int gcd(int x, int y){
    printf("%d %d\n", x, y);
    if (y == 0)  /* 餘 0，除數 x 即為最大公因數 */
        return x;
    else
        return gcd(y, x % y);  /* 前一步驟的除數為被除數，餘數為除數 */
}



int main(){

    int x = 36, y = 30;
    printf("\n%d", gcd(x, y));

    // int max_cf = 0;
    // for(int i=1; i<=x; i++){
    //     if((x % i == 0) && (y % i == 0)){
    //         max_cf = i;
    //     }
    // }

    // printf("%d ", max_cf);
    return 0;
}
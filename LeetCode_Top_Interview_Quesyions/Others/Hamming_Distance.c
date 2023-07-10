#include <stdio.h>
#include <stdlib.h>


// 0100
// 0010
int main(){
    int x = 4;
    int y = 2;

    int counter = 0;
    while((x>0) || (y>0)){

        int x_l = ((x | 1) == x) ? 1 : 0;
        int y_l = ((y | 1) == y) ? 1 : 0;

        if(x_l != y_l){
            counter ++;
        }
        x = x >> 1;
        y = y >> 1;
    }

    printf("%d", counter);
}
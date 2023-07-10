/* 給一個int a[20]已排序的陣列，請寫一個function(a, size)能印出0~500的數字，
   且不包含a陣列內的元素，請用最少的時間和空間複雜度完成 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void func(int *a, int size){
    int *ptr = a;
    for(int i=0; i<=500; i++){
        if(*ptr == i){
            ptr++;
        }else{
            printf("%d ", i);
        }
    }

}

int main(){
    int a[20] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20
    };
    func(a, sizeof(a)/sizeof(a[0]));
}

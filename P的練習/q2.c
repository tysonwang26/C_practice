
/*給一個int a[20]已排序的陣列，請寫一個function(a, size, b) 能依照參數b(b = 0~4)別印出該區間的數字，
  且不包含a陣列內的元素，例如 b =0, 印出0~99 b = 1, 印出100~199 */

#include <stdio.h>

void func(int *a, int size, int b){
    int *ptr = a;
    int s[2];
    s[0] = b*100;
    s[1] = b*100+99;

    printf("%d~%d\n", s[0], s[1]);

    for(int i=s[0]; i<s[1]; i++){
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

    func(a, 20, 0);
}
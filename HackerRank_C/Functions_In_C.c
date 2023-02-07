#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    int arr[4] = {a, b, c, d};
    int greatest = arr[0];
    for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] > greatest){
            greatest = arr[i];
        }
    }
    return greatest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
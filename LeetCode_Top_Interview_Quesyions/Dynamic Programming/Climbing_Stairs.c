#include <stdio.h>
#include <stdlib.h>

int dp(int n, int *t){
    if(n==1) return 1;
    if(n==2) return 2;
    if(t[n] != 0) return t[n];
    t[n] = dp(n-1, t) + dp(n-2, t);
    return t[n];
}

int main(){
    int *table = calloc(1000, sizeof(int));
    int ans = dp(45, table);
    printf("%d", ans);
    free(table);
    return 0;
}
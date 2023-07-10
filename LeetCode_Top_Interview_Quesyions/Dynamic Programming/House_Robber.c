#include <stdio.h>
#include <stdlib.h>

int dp(int *nums, int n, int *table){
    if(n<0) return 0;
    if(n==0) return nums[0];
    
    printf("%d\n", n);
    if(table[n] > 0) return table[n];

    int tmp1 = dp(nums, n-2, table) + nums[n];
    int tmp2 = dp(nums, n-1, table);
    table[n] = (tmp1>tmp2)?tmp1:tmp2;
    return table[n];
    
    return (table[n] > table[n-1]) ? table[n] : table[n-1];
}


int main(){
    int nums[] = {2,7,9,3,1};
    int numsSize = sizeof(nums)/sizeof(nums[0]);

    int *table = calloc(numsSize, sizeof(int));

    int ans = dp(nums, numsSize-1, table);
    printf("%d", ans);
    free(table);
    return 0;
}
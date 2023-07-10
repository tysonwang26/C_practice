#include <stdio.h>
#include <stdlib.h>

int main(){
    // int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int nums[] = {5,4,-1,7,8};

    int numsSize = sizeof(nums)/sizeof(nums[0]);
    
    int ans = nums[0];
    int sum = nums[0];
    
    for(int i=1; i<numsSize; i++){
        int tmp = sum+nums[i];
        if(tmp < nums[i]){
            sum = nums[i];
        }else{
            sum = tmp;
        }
        if(sum > ans) ans = sum;
    }

    printf("%d", ans);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int nums[] = {4,1,2,1,2};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    int target;
    for(int i=0; i<numsSize; i++){
        int contain = false;
        for(int j=0; j<numsSize; j++){
            if(i==j) continue;
            if(nums[i] == nums[j]){
                contain = true;
                break;
            }
        }
        if(!contain){
            target = nums[i];
            break;
        }
    }

    printf("%d", target);
    return 0;
}
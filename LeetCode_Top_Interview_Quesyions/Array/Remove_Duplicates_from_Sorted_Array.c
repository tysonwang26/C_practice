
/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/
*/
#include <stdio.h>


int main(){

    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    // int nums[] = {1, 1, 2};

    int k = 1;
    for (int i = 1; i < numsSize; i++){
        if (nums[i] != nums[i - 1]){
            nums[k] = nums[i];
            k++;
        }
    }

    for(int i=0; i<numsSize; i++){
        printf("%d ", nums[i]);
    }


    return 0;
}
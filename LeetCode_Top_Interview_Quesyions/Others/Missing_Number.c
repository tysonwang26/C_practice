
/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/99/others/722/
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int nums[] = {3, 0, 1};
    int numsSize = 3;

    int total = 0;
    for(int i=0; i<numsSize; i++){
        total += i-nums[i];
    }

    printf("%d", total+numsSize);

    return 0;
}

/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/
*/

#include <stdio.h>
#include <stdlib.h>

// k=1
// 1234567
// 7123456

// void rotate(int *nums, int size){
//     int tmp = nums[size-1];
//     for(int i=size-1; i>0; i--){
//         printf("%d ", nums[i]);
//         nums[i] = nums[i-1];
//     }
//     nums[0] = tmp;
// }


int main(){

    // int nums[] = {1,2,3,4,5,6,7};
    // int k=3;

    int nums[] = {1,2,3,4,5,6,7};
    int k=1;

    int size = sizeof(nums)/sizeof(nums[0]);
    int n_rotate = k%size;

    for(int i=0; i<size; i++){
        rotate(nums, size);
    }

    printf("\n");

    for(int i=0; i<size; i++){
        printf("%d ", nums[i]);
    }    

    return 0;
}
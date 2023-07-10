
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int length){
    for(int i=0; i<length; i++){
        for(int j=0; j<length; j++){
            if(arr[i]<arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    for(int i=0; i<nums2Size; i++){
        nums1[m+i] = nums2[i];
    }
    bubbleSort(nums1, nums1Size);
}
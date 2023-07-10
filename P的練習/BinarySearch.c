#include <stdio.h>

int binarySearch(int *arr, int target, int arr_size){
    int l_p = 0;
    int middle;
    int r_p = arr_size;

    while(l_p < r_p){
        middle = (r_p + l_p) / 2;

        if(arr[middle] > target){
            r_p = middle - 1;
        }else if(arr[middle] < target){
            l_p = middle + 1;
        }else{
            return middle;
        }
    }
    return -1;
}

int main(){


    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 1;

    int index = binarySearch(arr, target, sizeof(arr)/sizeof(arr[0]));
    printf("%d", index);
    return 0;
}
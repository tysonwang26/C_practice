
#include <stdio.h>

int main(){
    int arr[20] = {};
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        arr[i] = i;
    }

    int target = 19;

    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]);
    int time = 1;
    int *ans;
    while(left <= right){
        printf("%d times\n", time);
        int mid = (left + right) / 2;
        if(arr[mid] < target){
            left = mid+1;
        }else if(arr[mid] > target){
            right = mid-1;
        }else{
            printf("find target in index %d", mid);
            ans = &mid;
            break;
        }
        time++;
    }

    if(ans == NULL){
        printf("not found");
    }
}

/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/
*/

#include <stdio.h>

int main(){

    int total = 0;

    int prices[] = {1, 2, 3, 4, 5};
    int size = sizeof(prices)/sizeof(prices[0]);

    int buy = prices[0];
    for(int i=1; i<size; i++){
        if(prices[i] > prices[i-1]){
            continue;
        }

        int curr_profit = prices[i-1] - buy;
        total += curr_profit;

        buy = prices[i];

    }

    total += prices[size-1] - buy;

    printf("%d ", total);

    return 0;
}
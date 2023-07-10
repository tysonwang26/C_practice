#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double arrayToDecimal(int *arr, int arrSize){
    double decimal = 0;
    for(int i=0; i<arrSize; i++){
        decimal += pow(10, i) * arr[arrSize - 1 - i];
    }
    return decimal;
}

int *decimalToArray(double decimal, int *arr, int size){

    for(int i=size-1; i>=0; i--){
        printf("%.0f ", pow(10, i));
        int tmp = pow(10, i);
        arr[size-i-1] = (int)(decimal/tmp);
        printf("%d ", arr[size-i-1]);
        printf("%d\n", arr[size-i-1]*tmp);
        decimal-=arr[size-i-1]*tmp;
    }

    return arr;
}

int main(){
    int digits[] = {9,8,7,6,5,4,3,2,1,0};
    int numsSize = sizeof(digits)/sizeof(digits[0]);

    double decimal = arrayToDecimal(digits, numsSize);
    decimal = decimal + 1;

    printf("%.0f\n", decimal);


    int n_digits = 0;
    double tmp = decimal;
    while(1){
        if(tmp < 1) break;
        tmp /= 10;
        n_digits ++;
    }

    // printf("%d\n", n_digits);

    int* newDigits = malloc(sizeof(int)*n_digits);

    newDigits = decimalToArray(decimal, newDigits, n_digits);

    // for(int i=0; i<n_digits; i++){
    //     printf("%d ", newDigits[i]);
    // }

    free(newDigits);
    return 0;
}
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    va_list sumList;
    va_start(sumList, count);
    int sum = 0;
    
    for (int i = 0; i < count; i++){
        sum += (va_arg(sumList, int));
    }
    
    va_end(sumList);
    return sum;
}

int min(int count,...) {
    va_list sumList;
    va_start(sumList, count);
    int min = 1000000;
    for (int i = 0; i < count; i++){
        int v = va_arg(sumList, int);
        if(v < min){
            min = v;
        }
    }
    va_end(sumList);
    return min;
}

int max(int count,...) {
    va_list sumList;
    va_start(sumList, count);
    int max = 0;
    for (int i = 0; i < count; i++){
        int v = va_arg(sumList, int);
        if(v > max){
            max = v;
        }
    }
    va_end(sumList);
    return max;
}

int test_implementations_by_sending_three_elements() {
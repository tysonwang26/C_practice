#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and=0;
    int or=0;
    int xor=0;
    //Write your code here.
    for(int i=1; i<= n; i++){
        for(int j=i+1; j<=n; j++){
            int _and = i & j;
            int _or = i | j;
            int _xor = i ^ j;
            // printf("a=%d b=%d and=%d or=%d xor=%d\n", i, j, _and, _or, _xor);
            if(_and > and && _and < k){
                and = _and;
            }
            if(_or > or && _or < k){
                or = _or;
            }
            if(_xor > xor && _xor < k){
                xor = _xor;
            }
        }
    }
    printf("%d\n", and);
    printf("%d\n", or);
    printf("%d", xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

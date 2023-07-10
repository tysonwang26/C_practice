#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int x = 1;
    
    if(x == -2147483648){
        return 0;
    }

    bool isNegative = false;
    if(x < 0){
        isNegative = true;
        x = 0-x;
    }

    int _x = x;

    int xLength = 1;

    while(1){
        if(_x<10){
            break;
        }
        printf("%d\n", _x);
        _x/=10;
        xLength++;
    }

    printf("x length = %d\n", xLength);

    double ans = 0;

    for(int i=xLength-1; i>=0; i--){
        // printf("%.0f ", pow(10, i));
        int n = x/pow(10, i);
        // printf("%d\n", n);

        ans += n*pow(10, xLength -1 - i);
        x-=n*pow(10, i);
    }


    if(isNegative){
        ans = 0 - ans;
    }
    printf("%.0f", ans);

    if(ans<(-pow(2, 31)) || ans>((pow(2, 31)-1))){
        return 0;
    }else{
        return (int)ans;
        printf("%d", (int)ans);
    }


    return 0;
}
//
//  main.c
//  50. Pow(x, n)
//
//  Created by Tai-Sung Wang on 2022/4/30.
//

#include <stdio.h>
#include <math.h>

double mul(double x, int n){
    
    if(n == 0){
        return 1;
    }
    
    if (n % 2 == 1){
        x = mul(x, floor(n / 2)) * mul(x, floor(n / 2)) * x;
    }else{
        x = mul(x, floor(n / 2)) * mul(x, floor(n / 2));
    }
    
    return x;
}

int main(int argc, const char * argv[]) {
    double x = 1;
    double n = -2147483648;
    
    double ans;
    if(n < 0){
        ans =  (1 / mul(x, -n));
    }else{
        ans = mul(x, n);
    }
    
    printf("%f", ans);
    return 0;
}

#include <stdio.h>

/*
給一個unsigned short, 問換算成16進制後四個值是否相同? 若是回傳1,否則回傳0
*/

void decimalToHex(unsigned short n, char *ans){

    char tmp[] = {'0', '0', '0', '0'};
    char hexDict[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int i=0;
    while(n){
        tmp[i] = hexDict[n%16];
        n /= 16;
        i++;
    }

    for(int j=3; j>=0; j--){
        // printf("%c", tmp[j]);
        ans[j] = tmp[j];
    }
}

int main(){
    unsigned short input = 0;
    unsigned short hex[4];

    char ans[] = {'0', '0', '0', '0'};
    decimalToHex(input, ans);

    for(int j=3; j>=0; j--){
        printf("%c", ans[j]);
    }

    if((ans[0] == ans[1]) && (ans[1] == ans[2]) && (ans[2] == ans[3])){
        printf("\nsame");
    }else{
        printf("\nnot same");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

void decimalToHex(int n){

    char ans[] = {'0', '0', '0', '0'};
    char tmp[] = {'0', '0', '0', '0'};
    char hexDict[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int i=0;
    while(n){
        tmp[i] = hexDict[n%16];
        printf("%c\n", hexDict[n%16]);
        n /= 16;
        i++;
    }

    for(int j=3; j>=0; j--){
        printf("%c", tmp[j]);
    }
}


int main(){
    
    decimalToHex(30);
    // printf("%d", (30%16));
    return 0;
}
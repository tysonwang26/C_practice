#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[1000] = {-1};
    scanf("%s", &s);
    int digit_freq[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i=0; i<sizeof(s)/sizeof(s[0]); i++){
        switch (s[i]){
        case '0':
            digit_freq[0]++;
            break;
        case '1':
            digit_freq[1]++;
            break;
        case '2':
            digit_freq[2]++;
            break;
        case '3':
            digit_freq[3]++;
            break;
        case '4':
            digit_freq[4]++;
            break;
        case '5':
            digit_freq[5]++;
            break;
        case '6':
            digit_freq[6]++;
            break;
        case '7':
            digit_freq[7]++;
            break;
        case '8':
            digit_freq[8]++;
            break;
        case '9':
            digit_freq[9]++;
            break;
        
        default:
            break;
        }
    }
    for(int i=0; i<sizeof(digit_freq)/sizeof(digit_freq[0]); i++){
        printf("%d ", digit_freq[i]);
    } 
    return 0;
}

//
//  main.c
//  9. Palindrome Number
//
//  Created by Tai-Sung Wang on 2022/4/30.
//

#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {
    int x = -2147483648;
    char x_s[12];
    sprintf(x_s, "%d", x);
    
    int left = 0;
    int right = strlen(x_s)-1;
    
    while (left < right) {
        printf("%c, %c\n", x_s[left], x_s[right]);
        
        if (x_s[left] != x_s[right]) {
            printf("false");
            break;
        }
        left++;
        right--;
    }
    return 0;
}

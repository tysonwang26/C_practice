/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/
*/


#include <stdio.h>

int main(){
    char s[] = "aabb";

    int index = -1;

    int i=0, j=0;
    while(1){
        // printf("%d ", i);
        if(s[i] == '\0')break;
        int isUniqe = 1;
        while(1){
            if(s[j] == '\0')break;
            // if(i!=j){
            //     // printf("%c %c \n", s[i], s[j]);

            // }

            if(i!=j){
                if(s[i] == s[j]){
                    isUniqe = 0;
                    break;
                }
            }
            j++;
        }
        j=0;
        printf("\n\n");
        if(isUniqe){
            index = i;
            break;
        }
        i++;
    }
    // for(int i=0; i<size; i++){
    //     int isUniqe = 1;
    //     for(int j=0; j<size; j++){
    //         if(i==j) continue;
    //         if(s[i] == s[j]){
    //             isUniqe = 0;
    //             break;
    //         }
    //         // printf("%c %c\n", s[i], s[j]);

    //     }

    //     // printf("\n");
    //     if(isUniqe){
    //         index = i;
    //         break;
    //     }
    // }

    printf("%d", index);
    
    return 0;
}
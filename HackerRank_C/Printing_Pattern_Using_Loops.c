#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for(int i=1; i<=(2*n)-1; i++){
        int a = n;
        for(int j=1; j<=(2*n)-1; j++){
            printf("%d ",a);
            if(j<i)
                a--;
            if(j>((2*n)-1-i))
                a++;
        }
        printf("\n");
    }
    return 0;
}
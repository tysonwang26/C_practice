#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int input1, input2;
    float input3, input4;
    
    scanf("%d", &input1);
    scanf("%d", &input2);
    scanf("%f", &input3);
    scanf("%f", &input4);
    
    printf("%d %d\n", (input1+input2), (input1-input2));
    printf("%.1f %.1f", (input3+input4), (input3-input4));
    return 0;
    
}

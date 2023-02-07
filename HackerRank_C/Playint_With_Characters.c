#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    scanf("%c", &ch);
    printf("%c", ch);
    
    char s[50];
    scanf("%s", &s);
    printf("\n%s", s);
    
    char sen[100];
    scanf("\n%[^\n]s", &sen);
    printf("\n%s", sen);
    return 0;
}

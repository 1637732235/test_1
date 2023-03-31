#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x;
    scanf("%d", &x);
    if (x >= 65 && x <= 122) {
        printf("%c\n", x);
    }
    return 0;
}
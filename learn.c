#include <stdio.h>

typedef enum{
    RED,
    GREEN,
    YELLOW
} Color;

int main(){
    Color r = RED;
    printf("%d", r);
    r++;
    printf("%d", r);
    Color x = 9999;
    printf("%d", x);
}
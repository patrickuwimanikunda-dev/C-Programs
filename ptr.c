#include <stdio.h>

int main(){
    int x = 90;
    int *ptr;
    ptr = &x;
    printf("%p\n",(void*)&x);
}
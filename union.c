#include <stdio.h>

typedef union{
    int i;
    float f;
    char c;
} Data;

struct S { int i; float f; char c; };
union  U { int i; float f; char c; };

int main(){
    Data d;
    d.i = 42;
    printf("i = %d\n", d.i);
    d.f = 3.42;
    printf("f = %f\n", d.f);
    printf("i = %d\n", d.i);
    printf("sizeof struct: %zu\n", sizeof(struct S));  // 12 (with padding)
    printf("sizeof union:  %zu\n", sizeof(union U));   // 4  (largest member)
}
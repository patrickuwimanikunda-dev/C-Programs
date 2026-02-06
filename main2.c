#include <stdio.h>

void changeValue(int *x) {
    *x = 100;   // modifies only the local copy
}

int main() {
    int a = 10;
    changeValue(&a);
    printf("a = %d\n", a);  // Output: a = 10
    return 0;
}

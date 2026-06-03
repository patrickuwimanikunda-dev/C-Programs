#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    char name[100];
    printf("Input your name: ");
    scanf("%s", &name);
    printf("Your name is: %s", name);
    return 0;
}
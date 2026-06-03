#include <stdio.h>
#include <stdlib.h>

int main(){
int* ptr;
ptr = (int*) malloc(sizeof(int));
if(ptr==NULL){
    printf("Memory Allocation failed!\n");
    return 1;
}
*ptr = 42;
printf("%d\n", *ptr);
free(ptr);
ptr = NULL;
}
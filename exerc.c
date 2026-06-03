#include <stdio.h>
#include <stdlib.h>

int main(){
    //pointer declaration
    float* ptr;

    //the pointer allocates the memory
    ptr = (float*) malloc(sizeof(float));

    //checking if the memor is free
    if(ptr==NULL){
        printf("Failed to allocate the memory\n");
        return 1;
    }
    //assigning the value to the pointer
    *ptr = 3.14;
    //printing the value
    printf("%f\n", *ptr);
    //freeing the memory
    free(ptr);
    //assigning null value to the pointer
    ptr=NULL;
    return 0;
}
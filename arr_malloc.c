#include <stdio.h>
#include <stdlib.h>
int main(){
    // declaration of the a number of temperatures holder and asking to input the number of elements
    int n;
    printf("Input the number of temperatures: ");
    // we store the number in the declared n variable
    scanf("%d", &n);
    float *arr;
    arr = (float*) malloc(n*sizeof(float));

    if(arr==NULL){
        printf("Memory allocation FAILED\n");
        return 1;
    }
    for(int a=0; a<n; a++){
        printf("Input Temperature %d: ", a+1);
        scanf("%f", &arr[a]);
    }
    for(int v =0; v<n; v++){
        printf("%.2f ", arr[v]);
    }
    free(arr);
    arr=NULL;
    return 0;
}
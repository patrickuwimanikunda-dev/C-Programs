#include <stdio.h>

int sumOfArrayElement(int b[], int a){
     int len = 0;
    for(int z=0; z<=a-1; z++){
        len ++;
    }
    return len;
    }
   int main(){
    int a;
   printf("Input the number of elements: ");
   scanf("%d", &a);
   int arr[a];
   for(int i = 0; i<=a-1; i++){
    printf("Input the element %d: ", i+1);
    scanf("%d", &arr[i]);
   }
   printf("Your array is: [");
   for(int c = 0;  c<=a-1; c++){
        if(c==a-1){
            printf("%d", arr[c]);
        }else{printf("%d, ", arr[c]);}
   }
   printf("]\n");
   int res = sumOfArrayElement(arr, a);
   printf("Length = %d", res);
   }

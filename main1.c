#include <stdio.h>

int myFunction(){
    int a = 5;
    char c='a';
    int A[5] = {1,2,5,5,0};
    float r = 3.14;
    printf("a=%d\n c=%c\n r=%f\n", a,c,r);
    for (int a=0; a<5; a++){
        printf("%d",A[a]);
    }
}
int main(){
myFunction();
return 0;
}

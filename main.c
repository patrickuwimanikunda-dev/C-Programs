#include <stdio.h>

void goose(){
    printf("Welcome to c programming.\n");
}
 void greet(int a, int b){
    printf("The sum is %d\n", a+b);
 }

 int res(){

    return 67+29;
    }

int mult(int c, int v){
    return c*v;
}
int main(){
    greet(4,7);

    goose();
    printf("%d\n", res());
    printf("%d",mult(4,5));
}

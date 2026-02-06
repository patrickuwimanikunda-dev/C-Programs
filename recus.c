#include <stdio.h>

int factorial(int a)
{    if(a==50)
    {
        return 50;
    }else{
        printf("%d ", a);
    return factorial(a+1);
}
}

int main()
{
    int b;
    int res = factorial(b);
    printf(" %d",res);
}

#include <stdio.h>

typedef enum{
    NONE = 0,
    READ = 1<<0,
    WRITE  = 1<<1,
    EXECUTE = 1<<2
} Permission;

int main(){
    int user_perms = READ | WRITE;
    if(user_perms & READ) printf("Can read\n");
    if(user_perms & WRITE) printf("Can write\n");
    if(user_perms & EXECUTE) printf("Can execute\n");
    else printf("Cannot execute");
    return 0;
}
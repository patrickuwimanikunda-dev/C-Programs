#include <stdio.h>

typedef enum {TYPE_INT, TYPE_FLOAT, TYPE_CHAR} DataType;

typedef struct{
    DataType type;
    union{
        int i;
        float f;
        char c;
    } Value;
} TaggedData;

    void print_data(TaggedData d){
        switch(d.type){
            case TYPE_INT: printf("int: %d\n", d.Value.i); break;
            case TYPE_FLOAT: printf("Float %f\n", d.Value.f); break;
            case TYPE_CHAR: printf("char: %c\n", d.Value.c); break;
        }
    }
int main(){
    TaggedData a = {TYPE_INT, .Value.i = 42};
    TaggedData b = {TYPE_FLOAT, .Value.f = 3.14};
    TaggedData c = {TYPE_CHAR, .Value.c = 'Z'};
    print_data(a);
    print_data(b);
    print_data(c);
    return 0;
}
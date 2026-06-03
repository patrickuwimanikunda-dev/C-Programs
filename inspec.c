#include <stdio.h>

typedef union{
    float f;
    unsigned char bytes[4];
} FloatBytes;

int main(){
    FloatBytes fb;
    fb.f = 3.14f;
    printf("float %f\n", fb.f);
    printf("Bytes: ");
    for(int i=0; i<4; i++){
        printf("%02X ", fb.bytes[i]);
    };
    return 0;
}
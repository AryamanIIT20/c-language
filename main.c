#include "bit_manipulation.h"
#include <stdio.h>


int main(){

    // int reg = 0xabcdef23;

    // printf("(set) 0x%x\n", set(reg,15,8));
    // printf("(clear) 0x%x\n", clear(reg,15,8));
    // printf("(extract) 0x%x\n", extract(reg,15,8));
    // printf("(insert) 0x%x\n", insert(reg,15,8, 0xab));

    const float num = 1.2;
    float* pnum = &num;
    *pnum = 2.2;

    printf("%f\n", num);
    
    return 0;
}
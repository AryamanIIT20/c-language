#ifndef BIT_MANIP_H
#define BIT_MANIP_H

#include <stdio.h>

int mask(int msb, int lsb){
    return ((1<<(msb-lsb+1))-1)<<lsb;
}

int extract(int reg, int msb, int lsb){
    return  (reg>>lsb) & (mask(msb, lsb)>>lsb);
}

int clear(int reg, int msb, int lsb){
    return reg & ~mask(msb, lsb);
}

int set(int reg, int msb, int lsb){
    return reg | mask(msb, lsb);
}

int insert(int reg, int msb, int lsb, int val){
    return clear(reg,msb,lsb) | ((val<<lsb) & mask(msb, lsb));
}

#endif
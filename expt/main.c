#include <stdio.h>

typedef unsigned char uint8_t;

typedef union{

    char a; // 1 byte
    short b; // 2 bytes

}myunion_t;

typedef struct{

    uint8_t red;
    uint8_t green;
    uint8_t blue;

}pixel_t;

// } __attribute__((packed)) pixel_t; // prevents padding

typedef enum{

    sunday = 0,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,

}weekday_t;

void display(pixel_t* px){

    printf("red : %d\n", px->red);
    printf("green : %d\n", px->green);
    printf("blue : %d\n", px->blue);

}

int main(){

    // pixel_t px;
    // px = (pixel_t){50,1,100};
    // printf("size of pixel_t structure : %d bytes \n", (int)sizeof(px));
    // display(&px);

    // myunion_t s;
    // printf("size of myunion_t : %d bytes \n", (int)sizeof(s));

    weekday_t w = monday;
    printf("%d \n", (int)sizeof(w));

    return 0;
}
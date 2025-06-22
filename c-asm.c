int add(int a, int b){
    return a+b;
}

int foo(){

    // char c1 = 'A';
    // int x = 10;
    // const float num = 1.2;
    // float* pnum = &num;
    // *pnum = 2.2;
    // num = 5.3;
    // short x = 1234;

    // volatile int i = 10;
    // i = i + 10;
    // i = i + 1;

    int (*fptr)(int,int) = &add;
    (*fptr)(2,4);

    return 0;
}
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("gia tri: %d\n", x);
    printf("dia chi: %p\n", &x);

    printf("gia tri qua con tro: %d\n", *p);
    printf("dia chi qua con tro: %p\n", p);

    return 0;
}
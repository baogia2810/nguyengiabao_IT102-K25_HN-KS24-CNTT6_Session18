#include <stdio.h>

void total(int *x, int *y, int *kq) {
    *kq = *x + *y;
}

int main() {
    int a = 7, b = 12, kq;
    total(&a, &b, &kq);
    printf("ket qua: %d\n", kq);
    return 0;
}

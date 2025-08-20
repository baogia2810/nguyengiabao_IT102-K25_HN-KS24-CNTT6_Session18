#include <stdio.h>

void update(int *arr, int pos, int val, int n) {
    if(pos >= 0 && pos < n) {
        *(arr + pos) = val;
    }
}

void print(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    update(arr, 2, 99, n);
    print(arr, n);
    return 0;
}

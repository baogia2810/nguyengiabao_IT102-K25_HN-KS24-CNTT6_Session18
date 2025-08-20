#include <stdio.h>

int search(int *arr, int n, int val) {
    for(int i = 0; i < n; i++) {
        if(*(arr + i) == val) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 7;
    int pos = search(arr, n, val);
    printf("%d\n", pos);
    return 0;
}

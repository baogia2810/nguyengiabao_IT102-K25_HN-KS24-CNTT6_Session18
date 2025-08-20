#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100], reverseString[100];
    char *pIn, *pRev;
    int len;

    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    len = strlen(inputString);
    if(inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
        len--;
    }

    pIn = inputString + len - 1;
    pRev = reverseString;

    while(pIn >= inputString) {
        *pRev = *pIn;
        pRev++;
        pIn--;
    }
    *pRev = '\0';

    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

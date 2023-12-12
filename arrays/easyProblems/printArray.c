#include <stdio.h>

void printArray(int array[], int len) {
    for (int i = 0; i < len; i++) {
       printf("%d", array[i]);
    }
    printf("\n");
}

int main () {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(array) / sizeof(array[0]);
    printArray(array, len);

    return 0;
}

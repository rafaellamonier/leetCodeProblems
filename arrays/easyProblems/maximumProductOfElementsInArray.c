#include <stdio.h>

int maxProductOfArray(int array[], int len) {
    int max1 = 0, max2 = 0;
    for (int i = 0; i < len; i++) {
        if (array[i] < max1) {
            max1 = array[i];
            printf("%d\n", array[i]);
        }
    }

    return 0;
}

int main () {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(array) / sizeof(array[0]);

    maxProductOfArray(array, len);

    return 0;
}

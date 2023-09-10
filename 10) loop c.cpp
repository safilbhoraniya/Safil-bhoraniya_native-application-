#include <stdio.h>

int main() {
    int start = 972;
    int end = 897;

    if (start < end) {
        printf("Start value should be greater than or equal to end value.\n");
    } else {
        printf("Numbers %d to %d in order:\n", start, end);
        for (int i = start; i >= end; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}


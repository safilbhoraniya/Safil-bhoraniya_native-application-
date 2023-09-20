#include <stdio.h>
#include <string.h>
int main(const char *str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }

    return 1;
}

int is palindrome () {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int isPalin = isPalindrome(str);

    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    if (isPalin) {
        printf("The original string is a palindrome.\n");
    } else {
        printf("The original string is not a palindrome.\n");
    }

    return 0;
}


#include <stdio.h>

int stringLength(const char* str) {
    const char* ptr = str; // Assign the starting address of the string to a pointer
    int length = 0;

    while (*ptr) {
        length++;
        ptr++; // Move the pointer to the next character
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = stringLength(str);
    printf("Length of the string: %d\n", length);

    return 0;
}

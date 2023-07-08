#include <stdio.h>

/**
 * Converts a binary number to an unsigned int.
 *
 * @param b Pointer to a string of 0 and 1 chars representing the binary number.
 * @return The converted unsigned int value. Returns 0 if there is an invalid character or if b is NULL.
 */

unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return 0;
    }

    unsigned int result = 0;
    int index = 0;

    while (b[index] != '\0') {
        if (b[index] != '0' && b[index] != '1') {
            return 0;  // Invalid character, return 0
        }

        result = result * 2 + (b[index] - '0');
        index++;
    }

    return result;
}

int main() {
    const char *binary = "101010";
    unsigned int decimal = binary_to_uint(binary);

    printf("%u\n", decimal);  // Output: 42

    return 0;
}

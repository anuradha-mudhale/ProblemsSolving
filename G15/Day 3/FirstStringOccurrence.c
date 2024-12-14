#include <stdio.h>

int findNeedle(char haystack[], char needle[]) {
    int i, j, k;

    // Iterate over haystack
    for (i = 0; haystack[i] != '\0'; i++) {
        k = i; // Starting position in haystack
        for (j = 0; needle[j] != '\0'; j++) {
            if (haystack[k] == needle[j]) {
                k++;
            } else {
                break;
            }
        }

        // If the end of needle is reached, a match is found
        if (needle[j] == '\0') {
            return i;
        }
    }

    // If no match is found
    return -1;
}

int main() {
    char haystack[100], needle[100];

    // Input haystack and needle using scanf
    printf("Enter the haystack string: ");
    scanf("%s", haystack);

    printf("Enter the needle string: ");
    scanf("%s", needle);

    // Find the index
    int index = findNeedle(haystack, needle);

    // Output result
    printf("Index: %d\n", index);

    return 0;
}

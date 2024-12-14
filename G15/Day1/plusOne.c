#include <stdio.h>

int main() {
    int arr[100], i, n, result = 0, rem, count = 0, newArr[100];

    
    printf("Enter size of array elements: ");
    scanf("%d", &n);

   
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < n; i++) {
        result = result * 10 + arr[i];
    }

    printf("Array elements as a single number: %d\n", result);

   
    result += 1;

    
    while (result > 0) {
        rem = result % 10;  
        newArr[count++] = rem;
        result = result / 10; 
    }

    
    printf("Final array elements: ");
    for (i = count - 1; i >= 0; i--) {
        printf("%d ", newArr[i]);
    }

    return 0;
}

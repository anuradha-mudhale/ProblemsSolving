#include <stdio.h>
int main()
{
    int i, n, a[100], j = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[j] = a[i];  
            if (i != j) {
                a[i] = 0;  
            }
            j++;
        }
    }

   
    printf("Final Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


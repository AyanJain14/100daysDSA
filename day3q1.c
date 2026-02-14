#include <stdio.h>

int main() {
    int n, k, comparisons = 0;
    int found = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            printf("Key found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Key not found\n");
    }

    printf("Number of comparisons = %d", comparisons);

    return 0;
}

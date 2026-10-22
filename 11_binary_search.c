#include <stdio.h>
#define MAX 100

int main(void) {
    int a[MAX], n, target, low, high, mid, i, found = -1;
    printf("Enter number of elements (1-%d): ", MAX);
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Invalid size.\n"); return 1; }
    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value to search: ");
    scanf("%d", &target);
    low = 0; high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid] == target) { found = mid; break; }
        if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    if (found == -1) printf("Element not found.\n");
    else printf("Element found at position %d.\n", found + 1);
    return 0;
}

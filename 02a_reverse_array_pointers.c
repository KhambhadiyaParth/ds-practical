#include <stdio.h>
#define MAX 100

int main(void) {
    int a[MAX], n, i;
    int *p;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Invalid size.\n"); return 1; }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    p = a + n - 1;
    printf("Array in reverse order: ");
    for (i = n - 1; i >= 0; i--) printf("%d ", *(p--));
    printf("\n");
    return 0;
}

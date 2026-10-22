#include <stdio.h>
#define MAX 100

int main(void) {
    int a[MAX], n, choice, pos, value, i, found;
    printf("Enter number of elements (0-%d): ", MAX);
    scanf("%d", &n);
    if (n < 0 || n > MAX) {
        printf("Invalid size.\n");
        return 1;
    }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    do {
        printf("\n1.Insert  2.Delete  3.Traverse  4.Search  0.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (n == MAX) { printf("Array is full.\n"); break; }
                printf("Enter position (1-%d) and value: ", n + 1);
                scanf("%d%d", &pos, &value);
                if (pos < 1 || pos > n + 1) { printf("Invalid position.\n"); break; }
                for (i = n; i >= pos; i--) a[i] = a[i - 1];
                a[pos - 1] = value;
                n++;
                printf("Element inserted.\n");
                break;
            case 2:
                printf("Enter position to delete (1-%d): ", n);
                scanf("%d", &pos);
                if (pos < 1 || pos > n) { printf("Invalid position.\n"); break; }
                for (i = pos - 1; i < n - 1; i++) a[i] = a[i + 1];
                n--;
                printf("Element deleted.\n");
                break;
            case 3:
                if (n == 0) printf("Array is empty.\n");
                else {
                    printf("Array: ");
                    for (i = 0; i < n; i++) printf("%d ", a[i]);
                    printf("\n");
                }
                break;
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &value);
                found = -1;
                for (i = 0; i < n; i++) if (a[i] == value) { found = i; break; }
                if (found == -1) printf("Element not found.\n");
                else printf("Element found at position %d.\n", found + 1);
                break;
            case 0: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    return 0;
}

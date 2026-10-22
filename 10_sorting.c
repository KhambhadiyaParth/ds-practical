#include <stdio.h>
#define MAX 100

void printArray(int a[], int n) {
    int i; for (i = 0; i < n; i++) printf("%d ", a[i]); printf("\n");
}
void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp; swapped = 1;
            }
        }
        if (!swapped) break;
    }
}
void selectionSort(int a[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) if (a[j] < a[min]) min = j;
        temp = a[i]; a[i] = a[min]; a[min] = temp;
    }
}
int main(void) {
    int a[MAX], b[MAX], n, i;
    printf("Enter number of elements (1-%d): ", MAX);
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Invalid size.\n"); return 1; }
    printf("Enter elements: ");
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); b[i] = a[i]; }
    bubbleSort(a, n); selectionSort(b, n);
    printf("Bubble sort: "); printArray(a, n);
    printf("Selection sort: "); printArray(b, n);
    return 0;
}

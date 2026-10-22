#include <stdio.h>

void changeValue(int x) {
    x = 100;
    (void)x; /* The changed local copy does not affect the caller. */
}
void changeByPointer(int *x) {
    *x = 100;
}

int main(void) {
    int a = 10, b = 10;
    printf("Before call: a = %d, b = %d\n", a, b);
    changeValue(a);
    changeByPointer(&b);
    printf("After call:  a = %d, b = %d\n", a, b);
    return 0;
}

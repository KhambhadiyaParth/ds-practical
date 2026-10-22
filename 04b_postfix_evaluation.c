#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 200

int main(void) {
    char expr[MAX];
    int stack[MAX], top = -1, i;
    printf("Enter postfix expression (single-digit operands, no spaces): ");
    if (scanf("%199s", expr) != 1) return 1;

    for (i = 0; expr[i] != '\0'; i++) {
        char c = expr[i];
        if (isdigit((unsigned char)c)) stack[++top] = c - '0';
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            int b, a;
            if (top < 1) { printf("Invalid postfix expression.\n"); return 1; }
            b = stack[top--];
            a = stack[top--];
            if (c == '+') stack[++top] = a + b;
            else if (c == '-') stack[++top] = a - b;
            else if (c == '*') stack[++top] = a * b;
            else {
                if (b == 0) { printf("Division by zero.\n"); return 1; }
                stack[++top] = a / b;
            }
        } else { printf("Unsupported character.\n"); return 1; }
    }
    if (top != 0) { printf("Invalid postfix expression.\n"); return 1; }
    printf("Result = %d\n", stack[top]);
    return 0;
}

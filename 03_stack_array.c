#include <stdio.h>
#define MAX 100

int main(void) {
    int stack[MAX], top = -1, choice, value, i;
    do {
        printf("\n1.Push  2.Pop  3.Peek  4.Display  0.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (top == MAX - 1) printf("Stack overflow.\n");
                else {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    stack[++top] = value;
                    printf("Pushed.\n");
                }
                break;
            case 2:
                if (top == -1) printf("Stack underflow.\n");
                else printf("Popped: %d\n", stack[top--]);
                break;
            case 3:
                if (top == -1) printf("Stack is empty.\n");
                else printf("Top element: %d\n", stack[top]);
                break;
            case 4:
                if (top == -1) printf("Stack is empty.\n");
                else {
                    printf("Stack (top to bottom): ");
                    for (i = top; i >= 0; i--) printf("%d ", stack[i]);
                    printf("\n");
                }
                break;
            case 0: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    return 0;
}

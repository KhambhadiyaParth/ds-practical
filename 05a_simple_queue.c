#include <stdio.h>
#define MAX 100

int main(void) {
    int q[MAX], front = 0, rear = -1, choice, value, i;
    do {
        printf("\n1.Enqueue  2.Dequeue  3.Display  0.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (rear == MAX - 1) printf("Queue is full.\n");
                else {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    q[++rear] = value;
                    printf("Enqueued.\n");
                }
                break;
            case 2:
                if (front > rear) printf("Queue is empty.\n");
                else {
                    printf("Dequeued: %d\n", q[front++]);
                    if (front > rear) { front = 0; rear = -1; }
                }
                break;
            case 3:
                if (front > rear) printf("Queue is empty.\n");
                else {
                    printf("Queue: ");
                    for (i = front; i <= rear; i++) printf("%d ", q[i]);
                    printf("\n");
                }
                break;
            case 0: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    return 0;
}

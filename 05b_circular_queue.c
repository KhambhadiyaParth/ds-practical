#include <stdio.h>
#define MAX 5

int main(void) {
    int q[MAX], front = -1, rear = -1, choice, value, i;
    do {
        printf("\n1.Enqueue  2.Dequeue  3.Display  0.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if ((rear + 1) % MAX == front) printf("Circular queue is full.\n");
                else {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    if (front == -1) front = 0;
                    rear = (rear + 1) % MAX;
                    q[rear] = value;
                    printf("Enqueued.\n");
                }
                break;
            case 2:
                if (front == -1) printf("Circular queue is empty.\n");
                else {
                    printf("Dequeued: %d\n", q[front]);
                    if (front == rear) front = rear = -1;
                    else front = (front + 1) % MAX;
                }
                break;
            case 3:
                if (front == -1) printf("Circular queue is empty.\n");
                else {
                    printf("Queue: ");
                    i = front;
                    while (1) {
                        printf("%d ", q[i]);
                        if (i == rear) break;
                        i = (i + 1) % MAX;
                    }
                    printf("\n");
                }
                break;
            case 0: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };
struct Node *head = NULL;

struct Node *newNode(int value) {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL) { printf("Memory allocation failed.\n"); exit(1); }
    p->data = value; p->next = NULL; return p;
}
void insertBeginning(int value) {
    struct Node *p = newNode(value); p->next = head; head = p;
}
void insertEnd(int value) {
    struct Node *p = newNode(value), *cur;
    if (head == NULL) { head = p; return; }
    cur = head; while (cur->next != NULL) cur = cur->next;
    cur->next = p;
}
int insertAfter(int key, int value) {
    struct Node *cur = head;
    while (cur != NULL && cur->data != key) cur = cur->next;
    if (cur == NULL) return 0;
    { struct Node *p = newNode(value); p->next = cur->next; cur->next = p; }
    return 1;
}
void deleteBeginning(void) {
    struct Node *p;
    if (head == NULL) { printf("List is empty.\n"); return; }
    p = head; head = head->next; free(p); printf("First node deleted.\n");
}
void deleteEnd(void) {
    struct Node *cur, *prev = NULL;
    if (head == NULL) { printf("List is empty.\n"); return; }
    cur = head;
    while (cur->next != NULL) { prev = cur; cur = cur->next; }
    if (prev == NULL) head = NULL; else prev->next = NULL;
    free(cur); printf("Last node deleted.\n");
}
int deleteAfter(int key) {
    struct Node *cur = head, *p;
    while (cur != NULL && cur->data != key) cur = cur->next;
    if (cur == NULL || cur->next == NULL) return 0;
    p = cur->next; cur->next = p->next; free(p); return 1;
}
void display(void) {
    struct Node *cur = head;
    if (cur == NULL) { printf("List is empty.\n"); return; }
    printf("List: ");
    while (cur != NULL) { printf("%d -> ", cur->data); cur = cur->next; }
    printf("NULL\n");
}
int main(void) {
    int ch, value, key;
    do {
        printf("\n1.Insert beginning 2.Insert end 3.Insert after value\n");
        printf("4.Delete first 5.Delete last 6.Delete after value 7.Display 0.Exit\nChoice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: printf("Value: "); scanf("%d", &value); insertBeginning(value); break;
            case 2: printf("Value: "); scanf("%d", &value); insertEnd(value); break;
            case 3:
                printf("Existing value and new value: "); scanf("%d%d", &key, &value);
                if (!insertAfter(key, value)) printf("Value not found.\n");
                break;
            case 4: deleteBeginning(); break;
            case 5: deleteEnd(); break;
            case 6:
                printf("Value after which to delete: "); scanf("%d", &key);
                if (!deleteAfter(key)) printf("Node or following node not found.\n");
                break;
            case 7: display(); break;
            case 0: break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 0);
    while (head != NULL) { struct Node *p = head; head = head->next; free(p); }
    return 0;
}

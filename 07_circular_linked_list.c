#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };
struct Node *last = NULL;

struct Node *newNode(int value) {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (!p) { printf("Memory allocation failed.\n"); exit(1); }
    p->data = value; p->next = NULL; return p;
}
void insertBeginning(int value) {
    struct Node *p = newNode(value);
    if (last == NULL) { last = p; p->next = p; }
    else { p->next = last->next; last->next = p; }
}
void insertEnd(int value) {
    insertBeginning(value);
    last = last->next;
}
int insertAfter(int key, int value) {
    struct Node *cur;
    if (last == NULL) return 0;
    cur = last->next;
    do {
        if (cur->data == key) {
            struct Node *p = newNode(value);
            p->next = cur->next; cur->next = p;
            if (cur == last) last = p;
            return 1;
        }
        cur = cur->next;
    } while (cur != last->next);
    return 0;
}
void deleteBeginning(void) {
    struct Node *first;
    if (last == NULL) { printf("List is empty.\n"); return; }
    first = last->next;
    if (first == last) last = NULL;
    else last->next = first->next;
    free(first); printf("First node deleted.\n");
}
void deleteEnd(void) {
    struct Node *cur;
    if (last == NULL) { printf("List is empty.\n"); return; }
    if (last->next == last) { free(last); last = NULL; }
    else {
        cur = last->next;
        while (cur->next != last) cur = cur->next;
        cur->next = last->next; free(last); last = cur;
    }
    printf("Last node deleted.\n");
}
int deleteAfter(int key) {
    struct Node *cur, *p;
    if (last == NULL) return 0;
    cur = last->next;
    do {
        if (cur->data == key) {
            p = cur->next;
            if (p == cur) last = NULL;
            else { cur->next = p->next; if (p == last) last = cur; }
            free(p); return 1;
        }
        cur = cur->next;
    } while (cur != last->next);
    return 0;
}
void display(void) {
    struct Node *cur;
    if (last == NULL) { printf("List is empty.\n"); return; }
    cur = last->next; printf("Circular list: ");
    do { printf("%d -> ", cur->data); cur = cur->next; } while (cur != last->next);
    printf("(back to head)\n");
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
                if (!deleteAfter(key)) printf("Value not found.\n");
                break;
            case 7: display(); break;
            case 0: break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 0);
    while (last != NULL) deleteBeginning();
    return 0;
}

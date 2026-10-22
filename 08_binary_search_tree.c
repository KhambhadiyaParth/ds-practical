#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *left, *right; };
struct Node *insert(struct Node *root, int value) {
    if (root == NULL) {
        struct Node *p = (struct Node *)malloc(sizeof(struct Node));
        if (!p) { printf("Memory allocation failed.\n"); exit(1); }
        p->data = value; p->left = p->right = NULL; return p;
    }
    if (value < root->data) root->left = insert(root->left, value);
    else if (value > root->data) root->right = insert(root->right, value);
    else printf("Duplicate value ignored: %d\n", value);
    return root;
}
void inorder(struct Node *r) { if (r) { inorder(r->left); printf("%d ", r->data); inorder(r->right); } }
void preorder(struct Node *r) { if (r) { printf("%d ", r->data); preorder(r->left); preorder(r->right); } }
void postorder(struct Node *r) { if (r) { postorder(r->left); postorder(r->right); printf("%d ", r->data); } }
void freeTree(struct Node *r) { if (r) { freeTree(r->left); freeTree(r->right); free(r); } }

int main(void) {
    struct Node *root = NULL;
    int n, i, value;
    printf("How many values? ");
    scanf("%d", &n);
    if (n < 0) { printf("Invalid count.\n"); return 1; }
    printf("Enter values: ");
    for (i = 0; i < n; i++) { scanf("%d", &value); root = insert(root, value); }
    printf("Inorder: "); inorder(root); printf("\n");
    printf("Preorder: "); preorder(root); printf("\n");
    printf("Postorder: "); postorder(root); printf("\n");
    freeTree(root);
    return 0;
}

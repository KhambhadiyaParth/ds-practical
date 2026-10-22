# 08 Binary Search Tree

## Aim
Implement the practical using C.

## Algorithm
1. Start with an empty root.
2. Insert each value: smaller values go left and larger values go right.
3. Inorder traversal visits left, root, right.
4. Preorder visits root, left, right.
5. Postorder visits left, right, root.
6. Free allocated nodes before exit.

## Simple explanation
A Binary Search Tree stores values according to the left-smaller and right-larger rule. Inorder traversal prints values in ascending order when duplicates are excluded.

## Sample output
```text
How many values? 5
Enter values: 4 2 6 1 3
Inorder: 1 2 3 4 6
Preorder: 4 2 1 3 6
Postorder: 1 3 2 6 4
```

## Compile and run
```bash
gcc ../08_binary_search_tree.c -o program
./program
```

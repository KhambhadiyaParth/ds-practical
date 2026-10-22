# 06 Singly Linked List

## Aim
Implement the practical using C.

## Algorithm
1. Define a node containing data and a pointer to the next node.
2. Insert at the beginning by linking the new node to the head.
3. Insert at the end by traversing to the final node.
4. Insert after a value by finding that node and adjusting links.
5. Delete first, last, or the node after a given value and free its memory.
6. Display nodes until `NULL`.

## Simple explanation
Each node points to the next node. `malloc()` creates nodes dynamically and `free()` releases removed nodes.

## Sample output
```text
1.Insert beginning 2.Insert end 3.Insert after value
4.Delete first 5.Delete last 6.Delete after value 7.Display 0.Exit
Choice: 2
Value: 10

Choice: 2
Value: 20

Choice: 7
List: 10 -> 20 -> NULL
```

## Compile and run
```bash
gcc ../06_singly_linked_list.c -o program
./program
```

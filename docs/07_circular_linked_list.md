# 07 Circular Linked List

## Aim
Implement the practical using C.

## Algorithm
1. Maintain a pointer `last`; the head is `last->next`.
2. For an empty list, the first node points to itself.
3. Insert or delete by changing the relevant links and update `last` when needed.
4. Traverse with a `do-while` loop until the pointer returns to the head.
5. Free all nodes before exiting.

## Simple explanation
The final node points back to the first node, so traversal must stop when it returns to the head, not when it reaches `NULL`.

## Sample output
```text
1.Insert beginning 2.Insert end 3.Insert after value
4.Delete first 5.Delete last 6.Delete after value 7.Display 0.Exit
Choice: 2
Value: 10

Choice: 2
Value: 20

Choice: 7
Circular list: 10 -> 20 -> (back to head)
```

## Compile and run
```bash
gcc ../07_circular_linked_list.c -o program
./program
```

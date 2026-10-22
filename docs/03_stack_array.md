# 03 Stack Array

## Aim
Implement the practical using C.

## Algorithm
1. Initialize `top = -1`.
2. Push: if full, report overflow; otherwise increment `top` and store the value.
3. Pop: if empty, report underflow; otherwise print the top and decrement `top`.
4. Peek: print the top without removing it.
5. Display from `top` down to zero.
6. Repeat until Exit.

## Simple explanation
A stack follows LIFO (Last In, First Out). `top` tracks the most recently inserted item.

## Sample output
```text
1.Push  2.Pop  3.Peek  4.Display  0.Exit
Choice: 1
Enter value: 25
Pushed.

1.Push  2.Pop  3.Peek  4.Display  0.Exit
Choice: 3
Top element: 25
```

## Compile and run
```bash
gcc ../03_stack_array.c -o program
./program
```

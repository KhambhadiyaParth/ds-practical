# 02A Reverse Array Pointers

## Aim
Implement the practical using C.

## Algorithm
1. Read the number of elements and the array.
2. Point `p` to the last element.
3. Print the value pointed to by `p`.
4. Move `p` one position backward each time until all values are printed.

## Simple explanation
A pointer stores an address. `p = a + n - 1` points to the last array element, and `*(p--)` prints it before moving backward.

## Sample output
```text
Enter number of elements: 5
Enter 5 elements: 1 2 3 4 5
Array in reverse order: 5 4 3 2 1
```

## Compile and run
```bash
gcc ../02a_reverse_array_pointers.c -o program
./program
```

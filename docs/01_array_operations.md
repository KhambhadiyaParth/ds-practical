# 01 Array Operations

## Aim
Implement the practical using C.

## Algorithm
1. Read the array size and elements.
2. Display a menu for insertion, deletion, traversal, and search.
3. For insertion, shift elements right and place the new value.
4. For deletion, shift later elements left.
5. For traversal, print each element.
6. For search, compare each element with the target.
7. Repeat until Exit is selected.

## Simple explanation
The array stores same-type values. Insertion and deletion shift elements to keep the array contiguous. Search uses linear search.

## Sample output
```text
Enter number of elements (0-100): 3
Enter 3 elements: 10 20 30

1.Insert  2.Delete  3.Traverse  4.Search  0.Exit
Choice: 3
Array: 10 20 30

1.Insert  2.Delete  3.Traverse  4.Search  0.Exit
Choice: 0
Exiting.
```

## Compile and run
```bash
gcc ../01_array_operations.c -o program
./program
```

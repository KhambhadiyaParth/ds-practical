# 10 Sorting

## Aim
Implement the practical using C.

## Algorithm
1. Read the array and copy it.
2. Bubble sort compares adjacent elements and swaps them if out of order.
3. Repeat passes until sorted or no swaps occur.
4. Selection sort finds the minimum remaining element and swaps it into the next position.
5. Print both sorted arrays.

## Simple explanation
Bubble sort moves large values toward the end through adjacent swaps. Selection sort repeatedly places the minimum remaining value at the beginning of the unsorted section.

## Sample output
```text
Enter number of elements (1-100): 5
Enter elements: 5 1 4 2 3
Bubble sort: 1 2 3 4 5
Selection sort: 1 2 3 4 5
```

## Compile and run
```bash
gcc ../10_sorting.c -o program
./program
```

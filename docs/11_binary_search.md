# 11 Binary Search

## Aim
Implement the practical using C.

## Algorithm
1. Read the sorted array and target value.
2. Set `low = 0` and `high = n - 1`.
3. Find the middle index.
4. If the middle value equals the target, stop.
5. If the target is larger, search the right half; otherwise search the left half.
6. Repeat while `low <= high`; report not found if the range becomes empty.

## Simple explanation
Binary search repeatedly halves the search range, so it is faster than linear search on sorted arrays. The array must be in ascending order for this code.

## Sample output
```text
Enter number of elements (1-100): 5
Enter 5 elements in ascending order: 10 20 30 40 50
Enter value to search: 40
Element found at position 4.
```

## Compile and run
```bash
gcc ../11_binary_search.c -o program
./program
```

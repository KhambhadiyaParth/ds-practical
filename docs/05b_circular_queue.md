# 05B Circular Queue

## Aim
Implement the practical using C.

## Algorithm
1. Initialize `front = rear = -1`.
2. Queue is full when `(rear + 1) % MAX == front`.
3. On enqueue, move `rear` circularly and store the item; set `front` to zero for the first item.
4. On dequeue, remove the front item and move `front` circularly.
5. If the last item is removed, reset both indices to `-1`.
6. Display by moving circularly from front to rear.

## Simple explanation
Modulo `% MAX` wraps an index back to zero when it reaches the array end, allowing freed positions to be reused.

## Sample output
```text
1.Enqueue  2.Dequeue  3.Display  0.Exit
Choice: 1
Enter value: 7
Enqueued.

1.Enqueue  2.Dequeue  3.Display  0.Exit
Choice: 3
Queue: 7
```

## Compile and run
```bash
gcc ../05b_circular_queue.c -o program
./program
```

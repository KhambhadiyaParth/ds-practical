# 05A Simple Queue

## Aim
Implement the practical using C.

## Algorithm
1. Initialize `front = 0` and `rear = -1`.
2. Enqueue by incrementing `rear` and inserting the value, unless the array is full.
3. Dequeue by printing the value at `front` and incrementing `front`, unless empty.
4. Display values from `front` to `rear`.
5. Reset the indices when the queue becomes empty.

## Simple explanation
A simple queue follows FIFO. This basic linear queue resets when emptied; unlike a circular queue, it does not reuse earlier freed positions while elements remain.

## Sample output
```text
1.Enqueue  2.Dequeue  3.Display  0.Exit
Choice: 1
Enter value: 10
Enqueued.

1.Enqueue  2.Dequeue  3.Display  0.Exit
Choice: 3
Queue: 10
```

## Compile and run
```bash
gcc ../05a_simple_queue.c -o program
./program
```

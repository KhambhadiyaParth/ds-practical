# 02B Call By Value Reference

## Aim
Implement the practical using C.

## Algorithm
1. Set two integer variables to 10.
2. Pass the first variable by value to a function that changes its local copy.
3. Pass the address of the second variable to a pointer parameter.
4. Print both variables before and after the calls.

## Simple explanation
In C, arguments are passed by value. Passing a pointer lets a function modify the original variable through its address; this is often described as call by reference in practicals.

## Sample output
```text
Before call: a = 10, b = 10
After call:  a = 10, b = 100
```

## Compile and run
```bash
gcc ../02b_call_by_value_reference.c -o program
./program
```

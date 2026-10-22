# 04B Postfix Evaluation

## Aim
Implement the practical using C.

## Algorithm
1. Read the postfix expression.
2. Push each digit onto the stack.
3. When an operator appears, pop the right operand and then the left operand.
4. Apply the operator and push the result.
5. At the end, exactly one value should remain; print it.

## Simple explanation
Postfix evaluation uses a stack. For subtraction and division, order matters: the first popped value is the right operand.

## Sample output
```text
Enter postfix expression (single-digit operands, no spaces): 23*54*+
Result = 26
```

## Compile and run
```bash
gcc ../04b_postfix_evaluation.c -o program
./program
```

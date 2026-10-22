# 04A Infix To Postfix

## Aim
Implement the practical using C.

## Algorithm
1. Read the infix expression.
2. Send operands directly to the postfix output.
3. Push opening parentheses onto the stack.
4. For an operator, pop higher-precedence operators (and equal-precedence operators except for right-associative `^`) before pushing it.
5. On a closing parenthesis, pop until the matching opening parenthesis.
6. Pop remaining operators and print postfix.

## Simple explanation
The stack temporarily stores operators so they appear in postfix order according to precedence and parentheses. This version accepts single-character operands.

## Sample output
```text
Enter infix expression (single-character operands): A+B*C
Postfix expression: ABC*+
```

## Compile and run
```bash
gcc ../04a_infix_to_postfix.c -o program
./program
```

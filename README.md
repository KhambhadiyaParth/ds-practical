# Data Structures Practicals in C

A beginner-friendly, GitHub-ready repository containing 11 Data Structures practical experiments in C. Each experiment has source code, a short algorithm, a simple explanation, and sample output.

## Experiments

| No. | Experiment | Source file |
|---:|---|---|
| 1 | Array insertion, deletion, traversal, and search | `01_array_operations.c` |
| 2A | Print array in reverse using pointers | `02a_reverse_array_pointers.c` |
| 2B | Call by value and pointer-based call by reference | `02b_call_by_value_reference.c` |
| 3 | Stack using array: push, pop, peek, display | `03_stack_array.c` |
| 4A | Infix to postfix conversion | `04a_infix_to_postfix.c` |
| 4B | Postfix expression evaluation | `04b_postfix_evaluation.c` |
| 5A | Simple queue using array | `05a_simple_queue.c` |
| 5B | Circular queue using array | `05b_circular_queue.c` |
| 6 | Singly linked list operations | `06_singly_linked_list.c` |
| 7 | Singly circular linked list operations | `07_circular_linked_list.c` |
| 8 | Binary Search Tree traversals | `08_binary_search_tree.c` |
| 9 | Graph traversal using DFS and BFS | `09_dfs_bfs_graph.c` |
| 10 | Bubble sort and selection sort | `10_sorting.c` |
| 11 | Binary search | `11_binary_search.c` |

## Requirements

- A C compiler such as GCC.
- A terminal, command prompt, or IDE such as Code::Blocks or VS Code.

## Compile and run

From the repository folder, compile any file with GCC:

```bash
gcc 01_array_operations.c -o array_operations
./array_operations
```

On Windows:

```bash
gcc 01_array_operations.c -o array_operations.exe
array_operations.exe
```

Replace the filename and output name for another experiment. For example:

```bash
gcc 03_stack_array.c -o stack
./stack
```

## Notes

- These are simple, menu-driven college-practical examples.
- Input validation is basic; enter values of the expected type.
- Infix-to-postfix conversion supports single-character alphanumeric operands and operators `+ - * / ^` with parentheses.
- Postfix evaluation supports single-digit operands and operators `+ - * /`; enter expressions without spaces, for example `23*54*+`.
- The graph program uses vertices numbered `0` through `n-1` and an adjacency matrix.
- Binary search requires the input array to be sorted in ascending order.
- C does not have true language-level call by reference; the second example demonstrates reference-like behavior by passing a pointer.

## Suggested GitHub upload

1. Create a new repository on GitHub.
2. Add all files from this folder, including this README.
3. Commit with a message such as `Add Data Structures practicals in C`.

## License

You may use and modify these examples for learning and college practical preparation.

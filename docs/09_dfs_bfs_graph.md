# 09 Dfs Bfs Graph

## Aim
Implement the practical using C.

## Algorithm
1. Read the number of vertices and edges.
2. Store each undirected edge in an adjacency matrix.
3. DFS: mark a vertex visited, print it, then recursively visit each unvisited neighbor.
4. BFS: use a queue, marking vertices visited when they are enqueued.
5. Start both traversals from the chosen vertex.

## Simple explanation
DFS explores deeply before backtracking and uses recursion here. BFS visits neighbors level by level using a queue. Only vertices reachable from the chosen start are printed.

## Sample output
```text
Enter number of vertices (1-20): 4
Enter number of edges: 3
Enter edge (u v), vertices 0 to 3: 0 1
Enter edge (u v), vertices 0 to 3: 0 2
Enter edge (u v), vertices 0 to 3: 1 3
Starting vertex: 0
DFS: 0 1 3 2
BFS: 0 1 2 3
```

## Compile and run
```bash
gcc ../09_dfs_bfs_graph.c -o program
./program
```

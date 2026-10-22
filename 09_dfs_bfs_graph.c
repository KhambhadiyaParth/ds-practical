#include <stdio.h>
#define MAX 20

int graph[MAX][MAX], visited[MAX], n;
void dfs(int v) {
    int i;
    visited[v] = 1;
    printf("%d ", v);
    for (i = 0; i < n; i++)
        if (graph[v][i] && !visited[i]) dfs(i);
}
void bfs(int start) {
    int queue[MAX], front = 0, rear = 0, seen[MAX] = {0}, i, v;
    queue[rear++] = start; seen[start] = 1;
    while (front < rear) {
        v = queue[front++];
        printf("%d ", v);
        for (i = 0; i < n; i++) {
            if (graph[v][i] && !seen[i]) {
                seen[i] = 1; queue[rear++] = i;
            }
        }
    }
}
int main(void) {
    int e, i, u, v, start;
    printf("Enter number of vertices (1-%d): ", MAX);
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Invalid number of vertices.\n"); return 1; }
    printf("Enter number of edges: ");
    scanf("%d", &e);
    if (e < 0 || e > n * (n - 1) / 2) { printf("Invalid edge count for a simple undirected graph.\n"); return 1; }
    for (i = 0; i < e; i++) {
        printf("Enter edge (u v), vertices 0 to %d: ", n - 1);
        scanf("%d%d", &u, &v);
        if (u < 0 || u >= n || v < 0 || v >= n) { printf("Invalid vertex.\n"); return 1; }
        graph[u][v] = graph[v][u] = 1;
    }
    printf("Starting vertex: "); scanf("%d", &start);
    if (start < 0 || start >= n) { printf("Invalid start vertex.\n"); return 1; }
    printf("DFS: "); dfs(start); printf("\n");
    printf("BFS: "); bfs(start); printf("\n");
    return 0;
}

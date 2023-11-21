#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 50 //max vertices

struct Graph {
    int V;
    bool adj[N][N];
};

struct Graph* createGraph(int V) {
    struct Graph* g = (struct Graph*)malloc(sizeof(struct Graph));
    g->V = V;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            g->adj[i][j] = false;
        }
    }
    return g;
}

void destroyGraph(struct Graph* g) {
    free(g);
}

void addEdge(struct Graph* g, int v, int w) {
    g->adj[v][w] = true;
}

void BFS(struct Graph* g, int s) {
    bool visited[N] = {false};
    int queue[N];
    int front = 0, rear = 0;
    visited[s] = true;
    queue[rear++] = s;

    while (front != rear) {
        s = queue[front++];
        printf("%d ", s);

        for (int adjacent = 0; adjacent < g->V; adjacent++) {
            if (g->adj[s][adjacent] && !visited[adjacent]) {
                visited[adjacent] = true;
                queue[rear++] = adjacent;
            }
        }
    }
}

int main() {
    struct Graph* g = createGraph(4);
    addEdge(g, 0, 1);
    addEdge(g, 0, 2);
    addEdge(g, 1, 2);
    addEdge(g, 2, 0);
    addEdge(g, 2, 3);
    addEdge(g, 3, 3);

    printf("Following BFS traversal from vertex 2: ");
    BFS(g, 2);

    destroyGraph(g);
    return 0;
}

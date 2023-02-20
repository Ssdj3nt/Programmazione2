#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// definisce la struttura di un nodo del grafo
typedef struct node {
    int data;
    struct node* next;
} Node;

// definisce la struttura del grafo
typedef struct graph {
    int num_vertices;
    Node** adj_list;
    bool* visited;
} Graph;

// crea un nuovo nodo
Node* create_node(int data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// crea un grafo con n vertici
Graph* create_graph(int n) {
    Graph* graph = (Graph*) malloc(sizeof(Graph));
    graph->num_vertices = n;
    graph->adj_list = (Node**) malloc(n * sizeof(Node*));
    graph->visited = (bool*) malloc(n * sizeof(bool));

    // inizializza la lista di adiacenza e i nodi visitati
    for (int i = 0; i < n; i++) {
        graph->adj_list[i] = NULL;
        graph->visited[i] = false;
    }

    return graph;
}

// aggiunge un arco non orientato tra due vertici del grafo
void add_edge(Graph* graph, int src, int dest) {
    // aggiunge un arco dal vertice src al vertice dest
    Node* new_node = create_node(dest);
    new_node->next = graph->adj_list[src];
    graph->adj_list[src] = new_node;

    // aggiunge un arco dal vertice dest al vertice src
    new_node = create_node(src);
    new_node->next = graph->adj_list[dest];
    graph->adj_list[dest] = new_node;
}

// algoritmo DFS ricorsivo
void dfs(Graph* graph, int vertex) {
    // segna il nodo come visitato e stampa il suo valore
    graph->visited[vertex] = true;
    printf("%d ", vertex);

    // scorre tutti i nodi adiacenti al nodo corrente
    Node* adj_list = graph->adj_list[vertex];
    while (adj_list != NULL) {
        int adj_vertex = adj_list->data;

        // se il nodo adiacente non è stato visitato, chiama la DFS su di esso
        if (!graph->visited[adj_vertex]) {
            dfs(graph, adj_vertex);
        }

        adj_list = adj_list->next;
    }
}

// funzione principale
int main() {
    // crea un grafo di esempio
    Graph* graph = create_graph(5);
    add_edge(graph, 0, 1);
    add_edge(graph, 0, 2);
    add_edge(graph, 1, 3);
    add_edge(graph, 2, 3);
    add_edge(graph, 3, 4);

    // esegue l'algoritmo DFS a partire dal nodo 0
    printf("DFS: ");
    dfs(graph, 0);

    return 0;
}

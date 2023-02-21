#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// definizione del tipo di dato per i nodi della lista di adiacenza
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// definizione del tipo di dato per il grafo
typedef struct Graph {
    int num_vertices;
    bool* visited;
    Node** adj_list;
} Graph;

// funzione ausiliaria per la creazione di un nuovo nodo della lista di adiacenza
Node* new_node(int data) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// funzione per la creazione del grafo
Graph* create_graph(int num_vertices) {
    Graph* graph = (Graph*) malloc(sizeof(Graph));
    graph->num_vertices = num_vertices;
    graph->visited = (bool*) malloc(num_vertices * sizeof(bool));
    graph->adj_list = (Node**) malloc(num_vertices * sizeof(Node*));

    for (int i = 0; i < num_vertices; i++) {
        graph->visited[i] = false;
        graph->adj_list[i] = NULL;
    }

    return graph;
}

// funzione per l'aggiunta di un arco al grafo
void add_edge(Graph* graph, int src, int dest) {
    Node* node = new_node(dest);
    node->next = graph->adj_list[src];
    graph->adj_list[src] = node;
}

// funzione ricorsiva per l'esplorazione in profondità (DFS) del grafo
void dfs_recursive(Graph* graph, int vertex) {
    // segna il nodo come visitato e stampa il suo valore
    graph->visited[vertex] = true;
    printf("%d ", vertex);

    // scorre tutti i nodi adiacenti al nodo corrente
    Node* adj_list = graph->adj_list[vertex];
    while (adj_list != NULL) {
        int adj_vertex = adj_list->data;

        // se il nodo adiacente non è stato visitato, chiama la DFS su di esso
        if (!graph->visited[adj_vertex]) {
            dfs_recursive(graph, adj_vertex);
        }

        adj_list = adj_list->next;
    }
}

int main() {
    // crea un grafo con 5 nodi
    Graph* graph = create_graph(5);

    // aggiungi gli archi al grafo
    add_edge(graph, 0, 1);
    add_edge(graph, 0, 2);
    add_edge(graph, 1, 3);
    add_edge(graph, 2, 3);
    add_edge(graph, 2, 4);

    // esegui la DFS sul grafo a partire dal nodo 0
    dfs_recursive(graph, 0);

    return 0;
}

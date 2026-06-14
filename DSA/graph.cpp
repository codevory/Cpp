#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int vertex;
    struct node *next;
} Node;

typedef struct adjList
{
    Node *head;
} List;

typedef struct graph
{
    int numVerteces;
    List *array;
} Graph;

Node *createNode(int v)
{
    Node *newNode = new Node;
    newNode->vertex = v;
    newNode->next = NULL;

    return newNode;
}

Graph *createGraph(int v)
{
    Graph *graph = new Graph;
    graph->numVerteces = v;
    graph->array = new List[v];

    for (int i = 0; i < v; i++)
        graph->array[i].head = NULL;
    return graph;
}

void addEdge(Graph *graph, int src, int dest)
{
    Node *newNode = createNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    newNode = createNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

void printGraph(Graph *graph)
{
    for (int v = 0; v < graph->numVerteces; v++)
    {
        Node *pCrawl = graph->array[v].head;
        cout << "\n Adjacent list of vertices head " << v << '\n';

        while (pCrawl)
        {
            cout << pCrawl->vertex;
            pCrawl = pCrawl->next;
        }
        cout << endl;
    }
}
int main()
{
    int v = 5;
    Graph *graph = createGraph(v);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printGraph(graph);
    return 0;
}
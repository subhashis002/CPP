#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//A structure to represent a node in adjacency list
struct AdjListNode{
    int dest;
    int weight;
    struct AdjListNode* next;
};

//A structure to represent an adjacency list
struct AdjList{
    struct AdjListNode *head;
};

//A structure to represent a graph. A graph is an array of adjacency list
//Size of array will be V (number of vertices in graph)
//
struct Graph{
    int V;
    struct AdjList* array;
};

//A utility function to create a new adjacency list node
struct AdjListNode* newAdjListNode(int dest, int weight){
    struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}

//A utility function that creates a graph of V vertices

struct Graph* createGraph(int V){
    struct Graph *graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;

    //Create an array of adjacency lists. Size of array will be V
    graph->array = (struct AdjList*)malloc(V*sizeof(struct AdjList));

    //Initialize each adjacency list as empty by making head as NULL
    for(int i=0; i<V; i++){
        graph->array[i].head = NULL;
    }

    return graph;
}

//Adds an edge to an undirected graph
void addEdge(struct Graph *graph,int src,int dest, int weight){
    //Add an edge from src to dest. A new node is added to the adjacency 
    //list of src. The node is added at the begining
    struct AdjListNode *newNode = newAdjListNode(dest,weight);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    //Since graph is undirected, add an edge from dest to src
    newNode = newAdjListNode(src,weight);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

//Structure to represent a min heap node
struct MinHeapNode{
    int v;
    int dist;
};

//structure to represent a min heap
struct MinHeap{
    int size;
    int capacity;
    int *pos;
    struct MinHeapNode **array;
};


//A utility function to create a new Min Heap Node
struct MinHeapNode * newMinHeapNode(int v,int dist){
    struct MinHeapNode* minHeapNode = (struct MinHeapNode *)malloc(sizeof(struct MinHeapNode));
    minHeapNode->v = v;
    minHeapNode->dist = dist;
    return minHeapNode;
}

//A utility function to create a Min Heap

struct MinHeap* createMinHeap(int capacity){
    struct MinHeap* minHeap = (struct MinHeap *)malloc(sizeof(struct minHeap));
    minHeapNode->v = v;
    minHeapNode->dist = dist;
    return minHeapNode;
}

//A utility function to create a Min Heap

struct MinHeap* createMinHeap(int capacity){

}




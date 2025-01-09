#ifndef GRAPH_H
#define GRAPH_H
#include<list>
using namespace std;
class Graph
{
    int V;    // No. of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists
public:
    Graph(int V);  // Constructor Graph();
    void addEdge(int v, int w); // function to add an edge to graph
    void BFS(int s);// prints BFS traversal from a given source s
};


#endif // GRAPH_H

#include"graph.h"
#include<iostream>
#include<list>
using namespace std;
// This class represents a directed graph using adjacency list representation

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v�s list.
}

void Graph::BFS(int s)
{
	// Mark all the vertices as not visited
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++)
		visited[i] = false;
	list<int> queue;// Create a queue for BFS
	visited[s] = true;// Mark the current node as visited and enqueue it
	queue.push_back(s);
	// 'i' will be used to get all adjacent vertices of a vertex
	list<int>::iterator i;

	while(!queue.empty()||!s)
	{
		// Dequeue a vertex from queue and print it
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		// Get all adjacent vertices of the dequeued
		// vertex s. If a adjacent has not been visited,
		// then mark it visited and enqueue it
		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

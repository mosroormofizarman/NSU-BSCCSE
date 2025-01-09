#include <iostream>
#include"graph.h"
using namespace std;

// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g(8);
g.addEdge(0,1);
g.addEdge(3,2);
g.addEdge(3,4);
g.addEdge(3,5);
g.addEdge(4,6);
g.addEdge(5,2);
//g.addEdge(6,7);
g.addEdge(6,3);
g.addEdge(7,0);
g.addEdge(7,1);
    cout << "Following is Depth First Traversal"
            " (starting from vertex 3) \n";
    g.DFS(3);

    return 0;
}

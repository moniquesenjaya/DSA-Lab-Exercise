// Graph header file
#ifndef _GRAPH
#define _GRAPH

struct node
{
	int vertex;
	node *next;
};

class Graph
{
private:
	node* Adj[10];
	int no_of_nodes;
	
public:
	Graph(int n);
	~Graph();
	void displayGraph();	
};

#endif

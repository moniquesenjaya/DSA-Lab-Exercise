// Graph implementation file
// A program to create a graph of n vertices using an adjacency list. 
// It reads and prints its information and finally deletes the graph.
#include <iostream>
#include <cstdlib>
#include "graph_adjlist.h"

using namespace std;

Graph::Graph(int n)
{
	no_of_nodes = n;
	for(int i = 0; i < no_of_nodes; i++)
		Adj[i] = nullptr;

	node* new_node; 
	node* last;
	int i, j, k, val;
	for(i = 0; i < no_of_nodes; i++)
	{
		last = nullptr;
		cout << "\n Enter the number of neighbours of node " << i << " : ";
		cin >> k;
		for(j = 1; j <= k; j++)
		{
			cout << "\t Enter the neighbour " << j << " of node " << i << " : ";
			cin >> val;
			new_node = new node;
			new_node->vertex = val;
			new_node->next = nullptr;
			
			if (Adj[i] == nullptr)
				Adj[i] = new_node;
			else
				last -> next = new_node;

			last = new_node;
		}
	}
}

void Graph::displayGraph()
{
	node* ptr;
	int i;
	for(i = 0; i < no_of_nodes; i++)
	{
		ptr = Adj[i];
		cout << "\n\t The neighbours of node " << i << " are : ";
		while(ptr != nullptr)
		{
			cout << "\t" << ptr->vertex;
			ptr = ptr->next;
		}
	}
}

Graph::~Graph()
{
	int i;
	node* temp;
	node* ptr;
	for(i = 0; i <= no_of_nodes; i++)
	{
		ptr = Adj[i];
		while(ptr != nullptr)
		{
			temp = ptr;
			ptr = ptr->next;
			delete temp;
		}
		Adj[i] = nullptr;
	}
}


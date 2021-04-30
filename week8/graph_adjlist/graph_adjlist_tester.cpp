// Graph tester
// A program to test run a graph
#include <iostream>
#include <cstdlib>
#include "graph_adjlist.h"

using namespace std;

int main()
{
	int n;
	system("cls"); 		// belongs to stdlib.h
	cout << "\n Enter the number of nodes in G : ";
	cin >> n;
	
	// create an object of Graph
	Graph g(n);
	cout << "\n The graph is : ";

	// create an object of Graph
	g.displayGraph();

	return 0;
}
/*
Output
Enter the number of nodes in G: 3
Enter the number of neighbours of 0: 1
	Enter the neighbour 1 of 0: 2
Enter the number of neighbours of 1: 1
	Enter the neighbour 2 of 1: 2
Enter the number of neighbours of 2: 2
	Enter the neighbour 0 of 2: 0
	Enter the neighbour 1 of 2: 1

The graph is :
	The neighbours of node 0 are: 2
	The neighbours of node 1 are: 2
	The neighbours of node 2 are: 0 1
*/


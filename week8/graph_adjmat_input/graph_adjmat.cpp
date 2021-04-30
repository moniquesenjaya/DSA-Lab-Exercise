// Graph tester
// A program to test run a graph represented by an Adjacency Matrix
#include <iostream>
#define MAX 3
using namespace std;

int main()
{
	// allocate an Adjacency Matrix
	int Adjmat[MAX][MAX];
	int n;	// connected = 1, not connected = 0

	// allocate an Adjacency Matrix
	cout << "\n Enter the adjacency matrix: \n";
	for(int i = 0; i < MAX; i++)
		for(int j = 0; j < MAX; j++) {
			cin >> n;
			Adjmat[i][j] = n;
		}

	// print the graph
	cout << "\n\n The graph is : \n";
	for(int i = 0; i < MAX; i++) {
		for(int j = 0; j < MAX; j++)
			cout << Adjmat[i][j] << " ";
		cout << "\n";
	}


	return 0;
}
/*
Input:
0 0 1
0 0 1
1 1 0

print graph:
0 0 1
0 0 1
1 1 0

*/


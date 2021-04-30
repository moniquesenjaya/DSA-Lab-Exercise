// Graphs -- BFS Algorithm
// a program to implement the breadth-first search algorithm.
#include <iostream>
#include "stack.h"
#include <vector>
#define DIM 8

using namespace std;

vector<int> depth_first_search(int adj[][DIM], bool visited[], int start)
{

	vector<int> stack_items;
	vector<int> seq_visit;
	Stack q;
	q.push(start);
	visited[start] = 1;

	while(!q.empty())
	{
		start = q.pop();
		visited[start] = true; // true means visited
		seq_visit.push_back(start);

		stack_items = q.traverse();
		
		for(int i = 0; i < DIM; i++)
		{
			if(adj[start][i] == 1 && visited[i] == false) 
			{
				if(q.empty()){
					q.push(i);			
					stack_items = q.traverse();
				}else{
					for(int k=0; k < stack_items.size(); k++){
						if(stack_items[k] != i) {						
							q.push(i);
						}
					}		
				}
			}
		}
		
	}
	return seq_visit;
	
}

void display_dfs(vector<int> dfs_sequence){
	cout << "\nDFS -- sequence of visited vertices are: \n";
	
	for(int i=0; i < dfs_sequence.size(); i++){
		cout << dfs_sequence[i] << " ";
	}		
	cout << endl;
}

int main()
{
	vector<int> dfs_sequence;
	
	bool visited[DIM] = {false};
	cout << "\n The graph in the adjacency matrix is : \n";

	/*
	int adj[DIM][DIM] = {
		{0, 1, 0, 1, 0},
		{1, 0, 0, 0, 0},
		{0, 0, 0, 0, 1},
		{1, 0, 0, 0, 1},
		{0, 0, 1, 1, 0}
	};
	*/
	int adj[DIM][DIM] = {
		{0, 1, 0, 1, 0, 1, 0, 0},
		{1, 0, 1, 0, 1, 0, 0, 0},
		{0, 1, 0, 1, 1, 0, 0, 0},
		{0, 0, 1, 0, 0, 0, 1, 1},
		{0, 1, 1, 0, 0, 0, 0, 0},
		{1, 0, 0, 0, 0, 0, 1, 0},
		{0, 0, 0, 1, 1, 1, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 0}
	};
	

	for(int i = 0; i < DIM; i++)
	{
		for(int j = 0; j < DIM; j++)
			cout << adj[i][j] << " ";
		cout << endl;
	}

	dfs_sequence = depth_first_search(adj,visited,0);	
	
	display_dfs(dfs_sequence);
	
	return 0;
}

/*
Output
The graph in the adjacency matrix is :
0 1 0 1 0
1 0 0 0 0
0 0 0 0 1
1 0 0 0 1
0 0 1 1 0

DFS Sequence:
A B D C E
*/

/*
SECOND TEST
Output
The graph in the adjacency matrix is :
0 1 0 1 0 1 0 0 
1 0 1 0 1 0 0 0
0 1 0 1 1 0 0 0
0 0 1 0 0 0 1 1
0 1 1 0 0 0 0 0
1 0 0 0 0 0 1 0
0 0 0 1 1 1 0 0
0 0 0 1 0 0 0 0

DFS Sequence:

*/

// Graphs -- BFS Algorithm
// a program to implement the breadth-first search algorithm.
#include <iostream>
#include "queue.cpp"
#include <vector>
#define DIM 8

using namespace std;

vector<int> breadth_first_search(int adj[][DIM], bool visited[], int start)
{
	vector<int> queue_items;
	vector<int> seq_visit;
	Queue q;
	q.insert(start);

	list<int>::iterator i;

	while(!q.empty())
	{
		// your code here		
		start = q.front();
        cout << start << " ";
        q.delete_element();

		for (i = adj[start].begin(); i != adj[start].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                q.insert(*i);
            }
        }
	}
	return seq_visit;
	
}

void display_bfs(vector<int> bfs_sequence){
	cout << "\nBFS -- sequence of visited vertices are: \n";
	
	for(int i=0; i < bfs_sequence.size(); i++){
		cout << bfs_sequence[i] << " ";
	}		
	cout << endl;
}

int main()
{
	vector<int> bfs_sequence;
	
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

	bfs_sequence = breadth_first_search(adj,visited,0);	
	
	display_bfs(bfs_sequence);
	
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


A B D C E
*/

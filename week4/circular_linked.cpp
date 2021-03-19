
#include "queue_linked.h"
using namespace std;
 

int main()
{
    int m, n, i, d;
	Queue myQueue;

    cout << "Enter the number of players: ";
    cin >> n;
    cout << "Enter the value of k (every kth player gets eliminated): ";
    cin >> m;

    for (i = 1; i <= n; i++){
        myQueue.q = myQueue.insert(i);
    }

    cout<< "The players are: ";
    myQueue.display();
    cout << endl;
    cout<< "Eliminated in order: ";

    while (n > 1){
        for (i=1; i <= m; i++){
            myQueue.move_next();
            
        }
        d = myQueue.delete_element();
        cout << d << "\t";
        n--;
    }
    cout << endl;
    d = myQueue.delete_element();
    cout<<"Winning player:	"<< d <<endl;
}

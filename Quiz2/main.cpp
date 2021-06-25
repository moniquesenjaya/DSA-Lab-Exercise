// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
  
// Linked List Node
struct Node {
    int data;
    Node* next;
};
  
// Utility function to create a
// new Linked List Node
Node* newNode(int val)
{
    Node* temp = new Node;
  
    temp->data = val;
  
    temp->next = NULL;
  
    return temp;
}

// function to find out middle element
struct Node* middle(Node* start, Node* last)
{
    if (start == NULL) {
        return NULL;
    } else {
        cout << "first " << start -> data;
    }
 
    struct Node* slow = start;
    struct Node* fast = start -> next;
    struct Node* tempLast = fast;
 
    while (fast != last)
    {
        tempLast = fast;
        fast = fast -> next;
        if (fast != last)
        {
            slow = slow -> next;
            fast = fast -> next;
        }
    }
    if (tempLast!=NULL){
        cout << " last " << tempLast->data;
    }   
    cout << " mid " << slow->data << endl;
    return slow;
}

// Function for implementing the Binary
// Search on linked list
struct Node* binarySearch(Node *head, int value)
{
    struct Node* start = head;
    struct Node* last = NULL;
 
    do
    {

        // Find middle
        Node* mid = middle(start, last);
        
        // If middle is empty
        if (mid == NULL){
            return NULL;
        }
 
        // If value is present at middle
        if (mid -> data == value)
            return mid;
 
        // If value is more than mid
        else if (mid -> data < value)
            start = mid -> next;
 
        // If the value is less than mid.
        else
            last = mid;
 
    } while (last == NULL ||
             last != start);
 
    // value not present
    return NULL;
}

// Function to sort a linked list using selection
// sort algorithm by swapping the next pointers
Node* selectionSort(Node* head)
{
    Node *a, *b, *c, *d, *r;
  
    a = b = head;
  
    // While b is not the last node
    while (b->next) {
  
        c = d = b->next;
  
        // While d is pointing to a valid node
        while (d) {
  
            if (b->data > d->data) {
  
                // If d appears immediately after b
                if (b->next == d) {
  
                    // Case 1: b is the head of the linked list
                    if (b == head) {
  
                        // Move d before b
                        b->next = d->next;
                        d->next = b;
  
                        // Swap b and d pointers
                        r = b;
                        b = d;
                        d = r;
  
                        c = d;
  
                        // Update the head
                        head = b;
  
                        // Skip to the next element
                        // as it is already in order
                        d = d->next;
                    }
  
                    // Case 2: b is not the head of the linked list
                    else {
  
                        // Move d before b
                        b->next = d->next;
                        d->next = b;
                        a->next = d;
  
                        // Swap b and d pointers
                        r = b;
                        b = d;
                        d = r;
  
                        c = d;
  
                        // Skip to the next element
                        // as it is already in order
                        d = d->next;
                    }
                }
  
                // If b and d have some non-zero
                // number of nodes in between them
                else {
  
                    // Case 3: b is the head of the linked list
                    if (b == head) {
  
                        // Swap b->next and d->next
                        r = b->next;
                        b->next = d->next;
                        d->next = r;
                        c->next = b;
  
                        // Swap b and d pointers
                        r = b;
                        b = d;
                        d = r;
  
                        c = d;
  
                        // Skip to the next element
                        // as it is already in order
                        d = d->next;
  
                        // Update the head
                        head = b;
                    }
  
                    // Case 4: b is not the head of the linked list
                    else {
  
                        // Swap b->next and d->next
                        r = b->next;
                        b->next = d->next;
                        d->next = r;
                        c->next = b;
                        a->next = d;
  
                        // Swap b and d pointers
                        r = b;
                        b = d;
                        d = r;
  
                        c = d;
  
                        // Skip to the next element
                        // as it is already in order
                        d = d->next;
                    }
                }
            }
            else {
  
                // Update c and skip to the next element
                // as it is already in order
                c = d;
                d = d->next;
            }
        }
  
        a = b;
        b = b->next;
    }
  
    return head;
}
  
// Function to print the list
void printList(Node* head)
{
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}
  
// Driver Code
int main()
{
    Node* head = newNode(2);
    head->next = newNode(4);
    head->next->next = newNode(4);
    head->next->next->next = newNode(0);
    head->next->next->next->next = newNode(0);
    head->next->next->next->next->next = newNode(6);
    head->next->next->next->next->next->next = newNode(1);
    head->next->next->next->next->next->next->next = newNode(2);
    head->next->next->next->next->next->next->next->next = newNode(8);
    head->next->next->next->next->next->next->next->next->next = newNode(5);
  
    cout<<"Sorted Item"<<endl;
    head = selectionSort(head);
  
    printList(head);

    cout<<endl;

    cout<<"Sorting"<<endl;

    if (binarySearch(head, 2) == NULL)
        printf("Value not present\n");
    else
        printf("Present");
  
    return 0;
}
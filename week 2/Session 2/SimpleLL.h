#include <iostream>
#include <string>
using namespace std;

class SimpleLL {
	public:
        struct NODE {
        int data;
        struct NODE *next;
        } *head, *tail, *ptr;


        struct SimpleLL::NODE* initNode(int);
        struct SimpleLL::NODE* search(struct SimpleLL::NODE*, int);

		void addNode( struct SimpleLL::NODE*);
        void insertNode( struct SimpleLL::NODE*);
        void deleteNode( struct SimpleLL::NODE*);
        void displayList( struct SimpleLL::NODE*)const ;
        void displayNode( struct SimpleLL::NODE*) const;


		SimpleLL():head(nullptr),tail(nullptr){}; //Constructor
		~SimpleLL();// destructor
		
	private:
		int count;
};

SimpleLL::~SimpleLL() {
	NODE *current, *temp;
	current = head;
	temp = head;
	while(current != nullptr) {
		current = current->next;
		delete temp;
		temp = current;
	}
}

struct SimpleLL::NODE* SimpleLL::initNode(int i) {
	struct NODE *ptr = new NODE;
 
	// error? then just return
	if( ptr == nullptr )                         
		return static_cast<struct NODE *>(nullptr);  
	// assign it 
	// then return pointer to ne node
	else {  
		ptr->data = i;                        
		return ptr;                         
	}
}

void SimpleLL::addNode( struct NODE *newNode )  {
	// if there is no node, put it to head
	if( head == nullptr ) {
		head = newNode;  
		tail = newNode;
	}

    // link in the new_node to the tail of the list
	// then mark the next field as the end of the list
	// adjust tail to point to the last node

    tail->next = newNode;       
	newNode->next = nullptr;       
	tail = newNode;               
}


void SimpleLL::insertNode( struct NODE *newnode ) {
   struct NODE *temp, *prev;                

   if( head == nullptr ) {                     // if an empty list,         
       head = newnode;                      // set 'head' to it         
       tail = newnode;
       head->next = nullptr;                   // set end of list to NULL     
       return;                                             
   }

   temp = head;                             // start at beginning of list 
					    // while currentname < newname 
   while( temp->data < newnode->data) {	    // to be inserted then 
          temp = temp->next;                // goto the next node in list  
          if( temp == nullptr )                // don't go past end of list    
              break;
   }							 
					    // set previous node before we insert  
					    // first check to see if it's inserting         
   if( temp == head ) {		    	    // before the first node 
      newnode->next = head;                 // link next field to original list    
      head = newnode;                       // head adjusted to new node          
   }
   else {				    // it's not the first node
      prev = head;		    	    // start of the list, 
      while( prev->next != temp ) {	
          prev = prev->next;	    	    // will cycle to node before temp 
      }
      prev->next = newnode;                 // insert node between prev and next   
      newnode->next = temp;
      if( tail == prev )		    // if the new node is inserted at the  
         tail = newnode;		    // end of the list the adjust 'end'    
   }
}

struct SimpleLL::NODE* SimpleLL::search(struct NODE* ptr, int data) {
    while( data != ptr->data ) {    
       ptr = ptr->next;                          
       if( ptr == nullptr )                          
          break;                                  
    }
    return ptr; 	
}

void SimpleLL::deleteNode( struct SimpleLL::NODE *ptr )
{
  SimpleLL::NODE *temp, *prev;
   temp = ptr;    // node to be deleted 
   prev = head;   // start of the list, will cycle to node before temp    

   if( temp == prev ) {                    // deleting first node?  
       head = head->next;                  // moves head to next node     
       if( tail == temp )                  // is it end, only one node?   
          tail = tail->next;               // adjust end as well          
       delete temp ;                       // free up space 
   }
   else {                                  // if not the first node, then 
       while( prev->next != temp ) {       // move prev to the node before
           prev = prev->next;              // the one to be deleted       
       }
       prev->next = temp->next;            // link previous node to next  
       if( tail == temp )                  // if this was the end node,   
           tail = prev;                    // then reset the end pointer  
      delete temp;                         // free up space
   }
}

void SimpleLL::displayNode( struct SimpleLL::NODE *ptr ) const
{
	cout << ptr->data << endl;
}

void SimpleLL::displayList( struct SimpleLL::NODE *ptr ) const
{
	if(!ptr) cout << "Nothing to display" << endl;
	while(ptr) {
		displayNode(ptr);
		ptr = ptr->next;
	}
}



	

	

	

	


// Your code here

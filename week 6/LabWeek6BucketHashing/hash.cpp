#include <iostream>
#include <cstring>
#include <cstdlib>
#include "hash.h"
using namespace std;

Hash::Hash(HashBucket* ht)
{
	HASH_TABLE = ht;
}

Hash::~Hash()
{
	delete(HASH_TABLE);
}


int Hash::sum_digits(int input, int base){
	return input == 0 ? 0 : input%base + sum_digits(input/base, base);
}

int Hash::folding(char *input){
	int key;
	int charSum = 0;
	int digitSum = 0;
	
	int length = strlen(input);
	
	for(int i=0 ; i<length ; i++){
		charSum += input[i];
	}
	
	digitSum = sum_digits(charSum, MAX_DATA);
	
//	cout<< "charSum  = " << charSum << " \n";
//	cout<< "digitSum = " << digitSum << " \n";
//	cout << "key	 = " << digitSum % MAX_DATA << " \n";
	
	return digitSum % MAX_DATA;
}

int Hash::division(char *input){
	int key;
	int charSum = 0;
	
	int length = strlen(input);
	
	for(int i=0 ; i<length ; i++){
		charSum += input[i];
	}
	
	key = charSum % MAX_DATA;
	return key;
}

Node* Hash::create_node(char* data){
	Node *node = new Node;
	strcpy(node->data, data);
//	node->key = division(data);
	node->key = folding(data);
//	cout << node->key << "\n";
	node->next = nullptr;
	return node;
}

void Hash::push_data(Node *node){
	// your code
	
}

void Hash::view_data(){
	for(int i=0 ; i<MAX_DATA ; i++){
		cout << "  Key[" << i << "]: ";
		Node *curr = HASH_TABLE[i].head;
		while(curr){
			cout << curr->data << " -> ";
			curr = curr->next;
		}
		cout << "(null)\n";
	}
}


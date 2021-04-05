#include <iostream>
#include <cstring>
#include <cstdlib>
#include "hash.h"

using namespace std;

int main(){
	
	HashBucket hb[MAX_DATA]; // create hash buckket and initialize it
	for(int i=0 ; i<MAX_DATA ; i++){
		hb[i].head = nullptr;
		hb[i].tail = nullptr;
		hb[i].number_of_node = 0;
	}
	
	Hash myhashtable(hb);
	
	myhashtable.push_data(myhashtable.create_node("Sidony Tanis"));
	myhashtable.push_data(myhashtable.create_node("Syntyche Shahjahan"));
	myhashtable.push_data(myhashtable.create_node("Dobromil Fedelma"));
	myhashtable.push_data(myhashtable.create_node("Muirne Avinash"));
	myhashtable.push_data(myhashtable.create_node("Senne Marian"));
	myhashtable.push_data(myhashtable.create_node("Taisiya Knutr"));
	myhashtable.push_data(myhashtable.create_node("Demetria Magomed"));
	myhashtable.push_data(myhashtable.create_node("Regan Till"));
	
//	myhashtable.push_data(myhashtable.create_node("Yudy Purnama"));
//	myhashtable.push_data(myhashtable.create_node("Hanry Ham"));
//	myhashtable.push_data(myhashtable.create_node("M Zulfikar"));
//	myhashtable.push_data(myhashtable.create_node("Jeklin Harefa"));
//	myhashtable.push_data(myhashtable.create_node("Dewi Suryani"));
//	myhashtable.push_data(myhashtable.create_node("Yohan Mulyono"));	
	
	myhashtable.view_data();	
	return 0;

}

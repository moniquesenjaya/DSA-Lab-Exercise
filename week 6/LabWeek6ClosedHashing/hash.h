#ifndef HASH_TABLE
#define HASH_TABLE

class ClosedHashtable
{
private:	
	int ht[10];
	int i;
	int found = 0;
	int key;

public:
	ClosedHashtable();
	void insert_val();
	void search_val();
	void delete_val();
	void display();
	
};

#endif


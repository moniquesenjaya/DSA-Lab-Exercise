#define MAX_DATA 10

typedef struct node{
	int key;
	char data[100];
	struct node *next;
} Node;

typedef struct hashbucket{
	int number_of_node;
	Node *head;
	Node *tail;
} HashBucket;

class Hash
{
private:
	HashBucket* HASH_TABLE;
	
public:
	Hash(HashBucket*);
	~Hash();
	int sum_digits(int input, int base);
	int folding(char *input);
	int division(char *input);
	Node* create_node(char* data);
	void push_data(Node *node);
	void view_data();
};


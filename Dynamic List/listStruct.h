typedef struct dataNode {
	int value;
} DataNode;

typedef struct node {
	DataNode dataNode;
	struct node* next;
} Node;

typedef struct list {
	int size;
	Node* head;
} List;

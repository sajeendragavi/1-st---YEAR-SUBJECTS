#ifndef liststruct_h
#define liststruct_h

struct Node
{
	int data;
	struct Node *next;
		
};

typedef struct Node node_t;
typedef struct Node* ptr;

ptr head;
#endif
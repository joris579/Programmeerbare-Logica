	void llist_show();
	void llist_add(int * val);
	void llist_remove(int val);
	void llist_clear();
	int llist_nrItems();
	char llist_excist();
	void llist_copy();
	typedef struct Node node_type;
	struct Node
	{
		struct Node * previousNode;
		struct Node * nextNode;
		int * value;
	} Node;

	struct NodeList
	{
		int count;
		struct Node * firstNode;
		struct Node * lastNode;
	};
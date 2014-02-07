#include <stdio.h>
#include <stdlib.h>


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

	struct NodeList nodeList;
	void llist_show()
	{
		struct Node * walker = nodeList.firstNode;
		while(1)
		{
			printf("%d\n",*walker->value );
			if (walker==nodeList.lastNode)
			{
				break;
			}
			walker = walker->nextNode;
		}
	}

	void llist_add(int * val)
	{
		struct NodeList * list;
		list = &nodeList;
		node_type * Node;


  		Node = calloc (1, sizeof (node_type));
    	
    	if (! Node) 
    	{
      	  printf("Allocating memmory failed!\n");
   		}
   		
   		Node->value = val;
    	
    	if (list->lastNode) 
    	{
        	list->lastNode->nextNode = Node;
        	Node->previousNode = list->lastNode;
        	list->lastNode = Node;
    	}

    	else 
    	{
        	list->firstNode = Node;
   		    list->lastNode = Node;
    	}
    list->count++;
	}

	void llist_remove(int val)
	{
		struct Node * walker = nodeList.firstNode;
		struct Node *previousWalker = nodeList.firstNode;
		while(1)
		{
			if (*walker->value==val)
			{
				if(walker == nodeList.lastNode)
				{
					nodeList.lastNode = walker->previousNode;
					previousWalker->nextNode = NULL;
				}
				else if(walker == nodeList.firstNode)
				{
					nodeList.firstNode = walker->nextNode;
					walker->nextNode->previousNode = NULL;
				}
				else
				{
					previousWalker->nextNode = walker->nextNode;
					walker->nextNode->previousNode = previousWalker;
				}
				free(walker);
				--nodeList.count;
				break;
			}
			previousWalker = walker;
			walker = walker->nextNode;
		}
	}

	void llist_clear()
	{
		struct Node * walker = nodeList.firstNode;
		struct Node * tempWalker = nodeList.firstNode;
		while(1)
		{
			if (llist_nrItems()==1)
			{
				free(walker);
				nodeList.firstNode = NULL;
				nodeList.lastNode = NULL;
				nodeList.count = 0;
				break;
			}
			tempWalker = walker;
			free(walker);
			walker = tempWalker->nextNode;
			--nodeList.count;
		}
	}

	int llist_nrItems()
	{
		return nodeList.count;
	}

	char llist_excist()
	{
		if (llist_nrItems()!=0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	void llist_copy()
	{

	}

	//So I can compile/debug ;)
	int main()
	{
		int a = 42;
		int b = 1337;
		int c = 214;
		int d = 1234;
		int e = 5005;
		printf("---------------\n|** Excist ***|\n---------------\n");
		printf("%d\n", llist_excist());
		printf("---------------\n|*** Begin ***|\n---------------\n");
		llist_add(&a);
		llist_add(&b);
		llist_add(&c);
		llist_add(&d);
		llist_add(&e);
		printf("---------------\n|** Excist ***|\n---------------\n");
		printf("%d\n", llist_excist());
		//printf("Derde waarde: %d\n", *nodeList.firstNode->nextNode->nextNode->value);
		printf("---------------\n|*No of items*|\n---------------\n");
		printf("%d\n", llist_nrItems());
		printf("---------------\n|**Print func*|\n---------------\n");
		llist_show();
		printf("---------------\n|**Delet func*|\n---------------\n");
		llist_remove(42);
		llist_show();
		printf("---------------\n|** Excist ***|\n---------------\n");
		printf("%d\n", llist_excist());
		printf("---------------\n|**Clear func*|\n---------------\n");
		llist_clear();
		printf("---------------\n|** Excist ***|\n---------------\n");
		printf("%d\n", llist_excist());
		return 0;
	}
# 0x17-doubly_linked_lists

Doubly linked list are a data structures that can be traversed forwards or backwards. They are almost identical to singly linked list with the difference that doubly linked list holds an address that reference the previous node (could be a node or NULL).

The advantages of a Doubly linked list is that it  allows for quick and easy insertion or deletion of nodes from a linked list.

Example: Doubly linked list

	struct node {
		int a;		<----- data
		node *next;	<----- pointer to the next node in the list
		node *prev;	<----- pointer to the previous node in the linked list
	};

### Traversal of a linked list

Traversing forward in a doubly linked list follows the same rules a singly linked list. Initialise a node as the "head", dereference the current node (node) and have it point to the address of the next node until "NULL" is reached (node = node->next).

Example: __Forward traversal__

	typedef struct node n;
	struct node{
		int a;
		n *next;
		n *prev;
	};

	int main(void)
	{
		n *n1 = malloc(sizeof(n));	<---- declaring and allocating memory to a variable
		n *n2 = malloc(sizeof(n));	<---- " "
		n *trav = NULL;			<---- a variable that will be used to traverse the list
		n1->a = 2;		<---- initialising the variable (struct)
		n1->next = n2;		<---- intialising the pointer with the address of the next node
		n2->a = 3;
		n2->next = NULL;
		trav = n1;

		while (trav != NULL)
		{
			printf("%d ", trav->a);
			trav = trav->next;
		}
		
		free(n1);
		free(n2);
	}

Output:

	$: 2 3

Traversing a doubly linked list backwards the user would need to initialise a node pointer to the tail of the linked list, in a for loop; visit the current node and dereference the pointer to the previous node until "NULL" is reached.

Example: __Backward traversal__

	typedef struct node n;
	struct node{
		int a;
		n *next;
		n *prev;
	};

	int main(void)
	{
		n *n1 = malloc(sizeof(n));		
		n *n2 = malloc(sizeof(n));			
		n *trav = NULL;

		n1->a = 2;
		n1->pre = NULL;		<------ a pointer that points to the previous node "NULL" / start
		n1->next = n2;

		n2->a = 3;
		n2->prev = n1;		<----- a node that points to the previoua node "n1"
		n2->next = NULL;

		trav = n2;		<---- The tail pointer pointing to the last pointer "n2"\
		
		while (trav != NULL)
		{
			print("%d ", trav->a);
			trav = trav->prev;
		}

		free(n1);
		free(n2);
	}

output:

	$: 3 2 

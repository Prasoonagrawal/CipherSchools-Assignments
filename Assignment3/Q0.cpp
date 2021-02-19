// Doubly Circular Linked List
void insertEnd(struct Node** start, int value)
{
	if (*start == NULL)
	{
		struct Node* new_node = new Node;
		new_node->data = value;
		new_node->next = new_node->prev = new_node;
		*start = new_node;
		return;
	}
	Node *last = (*start)->prev;
	struct Node* new_node = new Node;
	new_node->data = value;
	new_node->next = *start;
	(*start)->prev = new_node;
	new_node->prev = last;
	last->next = new_node;
}

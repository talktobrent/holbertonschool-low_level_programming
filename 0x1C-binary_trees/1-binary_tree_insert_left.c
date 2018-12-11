#include "binary_trees.h"

/*
* binary_tree_insert_left - inserts left node at parent
* @parent: pointer to parent
* @value: value at newnode
* Returns: new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	
	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));	
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent->left;
	if (newnode->left != NULL)
		newnode->left->parent = newnode;
	parent->left = newnode;
	newnode->right = NULL;

	return (newnode);
}

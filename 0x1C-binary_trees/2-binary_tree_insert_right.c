#include "binary_trees.h"

/*
* binary_tree_insert_right - inserts right node at parent
* @parent: pointer to parent
* @value: value at newnode
* Returns: new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	
	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));	
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = parent->right;
	if (newnode->right != NULL)
		newnode->right->parent = newnode;
	parent->right = newnode;
	newnode->left = NULL;

	return (newnode);
}

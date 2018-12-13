#include "binary_trees.h"

/**
* binary_tree_node - initiates binary tree node
* @parent: pointer to parent
* @value: value at node
* Description: creates new node in binary tree
* Return: new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}

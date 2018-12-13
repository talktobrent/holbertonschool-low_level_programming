#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of given node
 * @node: node in binary tree
 * Description: looks at parent to find sibling
 * Return: pointer to sibling, NULL if none or node is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}


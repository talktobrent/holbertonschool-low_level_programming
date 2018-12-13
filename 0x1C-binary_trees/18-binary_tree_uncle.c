#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of given node in binary tree
 * @node: node in binary tree
 * Description: traverses parents to find uncle
 * Return: pointer for uncle, NULL if not found or node is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

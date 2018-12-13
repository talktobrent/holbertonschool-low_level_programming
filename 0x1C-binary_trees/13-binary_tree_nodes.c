#include "binary_trees.h"

/**
* binary_tree_nodes - finds number of nodes with at least one child
* in given tree
* @tree: pointer to binary tree
* Description: returns 0 for any empty node and adds 1 otherwise
* Return: number of nodes found with at least one child
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->right) +
			binary_tree_nodes(tree->left));
	return (0);
}

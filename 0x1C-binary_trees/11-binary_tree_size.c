#include "binary_trees.h"

/**
* binary_tree_size - finds size of given tree
* @tree: pointer to binary tree
* Description: counts every node
* Return: number of nodes in tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->right) +
			binary_tree_size(tree->left));
}

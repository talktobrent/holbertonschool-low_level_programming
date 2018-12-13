#include "binary_trees.h"

/**
* binary_tree_leaves - finds number of leaves in given tree
* @tree: pointer to binary tree
* Description: counts 1 for any leaf, 0 otherwise
* Return: number of leaves found
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	return (0 + binary_tree_leaves(tree->right) +
		0 + binary_tree_leaves(tree->left));
}

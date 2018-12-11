#include "binary_trees.h"

/*
* binary_tree_height - finds height at given tree
* @tree: pointer to root of binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	right = 1 + binary_tree_height(tree->right);
	left = 1 + binary_tree_height(tree->left);

	if (right > left)
		return (right);
	return (left);
}

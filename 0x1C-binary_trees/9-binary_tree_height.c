#include "binary_trees.h"

/*
* binary_tree_height - finds height at given tree
* @tree: pointer to root of binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

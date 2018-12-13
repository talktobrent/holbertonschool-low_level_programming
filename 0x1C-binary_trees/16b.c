#include "binary_trees.h"

/*
* binary_tree_is_full - finds if given tree is full
* @tree: pointer to root of binary tree
* Description: splits with helper
*/

int binary_tree_is_perfect_help(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	if (tree == NULL)
		return (0);
	right = binary_tree_is_perfect_help(tree->right);
	left = binary_tree_is_perfect_help(tree->left);
	if (left != right)
		return (0);
	return (1);
}

int binary_tree_is_perfect_help(const binary_tree_t *tree)
{
	if (tree->left != NULL && tree->right != NULL)
		return ((1 + binary_tree_is_perfect_help(tree->left)) + binary_tree_is_perfect_help(tree->right));
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (-1);
}

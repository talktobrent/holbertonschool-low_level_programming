#include "binary_trees.h"

long int binary_tree_is_perfect_help(const binary_tree_t *tree);

/**
* binary_tree_is_perfect - finds if given tree is perfect
* @tree: pointer to root of binary tree
* Description: uses helper
* Return: 1 if perfect, 0 if not
*/


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_perfect_help(tree) != -1);
}

/**
* binary_tree_is_perfect_help - finds if given tree is perfect
* @tree: pointer to root of binary tree
* Description: compares if left and right equal, and adds depth if so
* Return: depth of perfect tree, -1 if not perfect
*/

long int binary_tree_is_perfect_help(const binary_tree_t *tree)
{
	long int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_is_perfect_help(tree->left);
	if (left != -1)
		right = binary_tree_is_perfect_help(tree->right);

	if (left == -1 || right == -1)
		return (-1);

	if (left == right)
		return (left + 1);

	return (-1);
}

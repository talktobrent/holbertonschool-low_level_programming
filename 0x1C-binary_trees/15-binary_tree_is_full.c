#include "binary_trees.h"

/**
* binary_tree_is_full - finds if given tree is full
* @tree: pointer to root of binary tree
* Description: splits with helper
* Return: 1 if full, 0 otherwise
*/

size_t binary_tree_is_full_help(const binary_tree_t *tree);

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL || tree->right == NULL)
		return (0);
	if (binary_tree_is_full_help(tree) == 0)
		return (1);
	return (0);
}

/**
* binary_tree_is_full_help - helps binary_tree_is_full
* @tree: pointer to root of binary tree
* Description: 'scores' 1 for any node that only has one non-NULL left or right
* node, scores 0 otherwise. A full tree will therefor return 0 if all its
* nodes are full
* Return: 0 if full, amount of non full nodes otherwise
*/

size_t binary_tree_is_full_help(const binary_tree_t *tree)
{
	if (tree->left != NULL && tree->right != NULL)
		return ((0 + binary_tree_is_full_help(tree->left)) +
			(0 + binary_tree_is_full_help(tree->right)));
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (1);
}

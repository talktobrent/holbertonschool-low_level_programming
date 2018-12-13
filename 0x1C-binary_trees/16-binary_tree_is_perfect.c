#include "binary_trees.h"

/**
* binary_tree_is_perfect - finds if given tree is perfect
* @tree: pointer to root of binary tree
* Description: splits with helper
* Return: 1 if perfect, 0 if not
*/

size_t binary_tree_is_perfect_help(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL || tree->left == NULL)
		return (0);
	if (binary_tree_is_perfect_help(tree) == 0)
		return (1);
	return (0);
}

/**
* binary_tree_is_perfect_help - helps binary_tree_is_perfect
* @tree: pointer to root of binary tree
* Description: 'scores' each node and subtracts to compare both sides of tree
* Return: 0 if perfect, any other number if not
*/

size_t binary_tree_is_perfect_help(const binary_tree_t *tree)
{
	if (tree->left != NULL && tree->right != NULL)
		return ((1 + binary_tree_is_perfect_help(tree->left)) -
			(1 + binary_tree_is_perfect_help(tree->right)));
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (3);
}

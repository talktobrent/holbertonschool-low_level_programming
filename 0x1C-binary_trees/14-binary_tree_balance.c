#include "binary_trees.h"

/**
* binary_tree_balance - finds balance factor at given tree
* @tree: pointer to root of binary tree
* Description: splits with helper
* Return: 0 if tree is NULL, integer balance otherwise
*/

int binary_tree_balance_help(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_balance_help(tree));
}

/**
 * binary_tree_balance_help - helper for binary_tree_balance
 * @tree: pointer to root of binary tree
 * Description: Adds 1 for every node in tree, returns -1 if node is NULL,
 * subtracts total from right and left to get balance
 * Return: integer difference from left and right
 */

int binary_tree_balance_help(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return ((1 + binary_tree_balance_help(tree->left)) - \
			(1 + binary_tree_balance_help(tree->right)));
}

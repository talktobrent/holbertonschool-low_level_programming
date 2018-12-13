#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_balance - finds balance factor at given tree
* @tree: pointer to root of binary tree
* Description: splits with helper
* Return: 0 if tree is NULL, integer balance otherwise
*/

size_t binary_tree_balance_help(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);
	left = binary_tree_balance_help(tree->left);
	right = binary_tree_balance_help(tree->right);
	return (left - right);
}

/**
 * binary_tree_balance_help - helper for binary_tree_balance
 * @tree: pointer to root of binary tree
 * Description: Adds 1 for every node in tree, returns -1 if node is NULL,
 * subtracts total from right and left to get balance
 * Return: integer difference from left and right
 */

size_t binary_tree_balance_help(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = 1 + binary_tree_balance_help(tree->left);
	right = 1 + binary_tree_balance_help(tree->right);
	if (left > right)
		return (left);
	return (right);
}

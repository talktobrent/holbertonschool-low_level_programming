#include "binary_trees.h"
#include <limits.h>

/**
 * binary_tree_is_bst - finds if binary tree is a valid binary search tree
 * @tree: tree given
 * Return: 1 if truee, 0 if not
 */

long int binary_tree_is_bst_left(const binary_tree_t *tree);
long int binary_tree_is_bst_right(const binary_tree_t *tree);

int binary_tree_is_bst(const binary_tree_t *tree)
{
	long int left, right;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL || tree->left == NULL)
		return (0);

	left = binary_tree_is_bst_left(tree->left);
	right = binary_tree_is_bst_right(tree->right);

	if (left == right || (left > INT_MAX || right > INT_MAX))
		return (0);

	if ((tree->left->n < tree->n) && (tree->n < tree->right->n))
		return (left < tree->n && tree->n < right);
	return (0);
}

/**
 * binary_tree_is_bst_left - checks left side of tree for correct bst order
 * @tree: tree given
 * Return: left-most value in tree if is higher than all others, INT MAX + 1
 * if not
 */

long int binary_tree_is_bst_left(const binary_tree_t *tree)
{
	long int left, right;

	if (tree->right == NULL && tree->left == NULL)
		return (tree->n);
	if (tree->left)
		left = binary_tree_is_bst_left(tree->left);
	if (tree->right)
		right = binary_tree_is_bst_left(tree->right);
	if (!tree->left)
	{
		if (right <= tree->n)
			return (1 + (long int)INT_MAX);
		return (right);
	}
	if (!tree->right)
	{
		if (left >= tree->n)
			return (1 + (long int)INT_MAX);
		return (left);
	}
	if (left != right && (left < tree->n && tree->n < right))
		return (right);
	return (1 + (long int)INT_MAX);
}

/**
 * binary_tree_is_bst_right - checks right side of tree for correct bst order
 * @tree: tree given
 * Return: left-most value in tree if is higher than all others, INT MAX + 1
 * if not
 */

long int binary_tree_is_bst_right(const binary_tree_t *tree)
{
	long int left, right;

	if (tree->right == NULL && tree->left == NULL)
		return (tree->n);
	if (tree->left)
		left = binary_tree_is_bst_right(tree->left);
	if (tree->right)
		right = binary_tree_is_bst_right(tree->right);
	if (!tree->left)
	{
		if (right <= tree->n)
			return (1 + (long int)INT_MAX);
		return (right);
	}
	if (!tree->right)
	{
		if (left >= tree->n)
			return (1 + (long int)INT_MAX);
		return (left);
	}
	if (left != right && (left < tree->n && tree->n < right))
		return (left);
	return (1 + (long int)INT_MAX);
}

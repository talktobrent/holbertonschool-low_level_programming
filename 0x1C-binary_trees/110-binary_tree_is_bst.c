#include "binary_trees.h"
#include <limits.h>
#define BAD (1 + (long int)INT_MAX)
#define EMPTY (2 + (long int)INT_MAX)
#define TOPEMPTY (-1 + (long int)INT_MIN)

long int binary_tree_is_bst_help(const binary_tree_t
		*tree, long int top, size_t cross);

/**
 * binary_tree_is_bst - finds if binary tree is a valid binary search tree
 * @tree: tree given
 * Return: 1 if true, 0 if not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_bst_help(tree, TOPEMPTY, 1) != BAD);
}

/**
 * binary_tree_is_bst_help - checks left side of tree for correct bst order
 * @tree: tree given
 * @top: holds n value of origin node AFTER it crosses over from left, it
 * is triggered via cross. The value is stored outside INT range by default
 * until it is crossed, this way it will always compare higher on the left side
 * @cross: counts recursion to identify origin node
 * Return: highest value in tree if is true binary tree, INT_MAX + 1 if not
 */

long int binary_tree_is_bst_help(const binary_tree_t
		*tree, long int top, size_t cross)
{
	long int left = EMPTY, right = EMPTY;

	if (tree->right == NULL && tree->left == NULL)
		return (tree->n);

	if (tree->left)
		left = binary_tree_is_bst_help(tree->left, top, cross + 1);

	if (cross == 1)
		top = tree->n;
	if (tree->right)
		right = binary_tree_is_bst_help(tree->right, top, cross + 1);

	if (right == BAD || left == BAD)
		return (BAD);

	if (cross != 1)
		if (top >= right || top >= left)
			return (BAD);

	if (!tree->left)
	{
		if (right <= tree->n)
			return (BAD);
		return (right);
	}
	if (!tree->right)
	{
		if (left >= tree->n)
			return (BAD);
		return (left);
	}

	if (left != right && (left < tree->n && tree->n < right))
		return (right);
	return (BAD);
}

#include "binary_trees.h"

long int binary_tree_is_avl_help(const binary_tree_t
		*tree, long int level);

/**
 * binary_tree_is_avl - finds if binary tree is avl
 * @tree: tree given
 * Return: 1 if true 0 otherwise
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_avl_help(tree, 0) != 0);
}

/**
 * binary_tree_is_avl_help - finds if binary tree is avl helper
 * @tree: tree given
 * @level: tracks level of recursion to compare where nodes are null
 * Return: the level of deepest leaves in a true avl tree, or 0 if untrue
 */

long int binary_tree_is_avl_help(const binary_tree_t
		*tree, long int level)
{
	long int null_level_left, null_level_right;

	if (tree == NULL)
		return (level);

	if (level != 0)
	{
		if (tree == tree->parent->right)
			if (tree->n <= tree->parent->n)
				return (0);
		if (tree == tree->parent->left)
			if (tree->n >= tree->parent->n)
				return (0);
	}

	null_level_left = binary_tree_is_avl_help(tree->left, level + 1);
	null_level_right = binary_tree_is_avl_help(tree->right, level + 1);

	if (null_level_left == 0 || null_level_right == 0)
		return (0);

	if (null_level_left == null_level_right)
		return (null_level_right);

	if (null_level_left == null_level_right + 1)
		return (null_level_left);

	if (null_level_left == null_level_right - 1)
		return (null_level_right);

	return (0);
}

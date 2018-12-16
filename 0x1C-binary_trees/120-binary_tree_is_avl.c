#include "binary_trees.h"

long int binary_tree_is_avl_help(const binary_tree_t
		*tree, long int level, const binary_tree_t *cross);

int plinko(const binary_tree_t *run, const binary_tree_t *cross);

/**
 * binary_tree_is_avl - finds if binary tree is avl
 * @tree: tree given
 * Return: 1 if true 0 otherwise
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_avl_help(tree, 0, tree) != 0);
}

/**
 * binary_tree_is_avl_help - finds if binary tree is avl helper
 * @tree: tree given
 * @level: tracks level of recursion to compare where nodes are null
 * @cross: value at root node to check if good bst
 * Return: the level of deepest leaves in a true avl tree, or 0 if untrue
 */

long int binary_tree_is_avl_help(const binary_tree_t
		*tree, long int level, const binary_tree_t *cross)
{
	long int null_level_left, null_level_right;

	if (tree == NULL)
		return (level - 1);

	if (tree->right == NULL && tree->left == NULL)
	{
		if (plinko(tree, cross))
			return (level);
		return (0);
	}

	null_level_left = binary_tree_is_avl_help(tree->left, level + 1, cross);
	null_level_right = binary_tree_is_avl_help(tree->right, level + 1, cross);

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

/**
 * plinko - works up BST binary tree, testing if each value is in correct place
 * @run: node given
 * @cross: tree given
 * Return: 1 if good, 0 if not
 */

int plinko(const binary_tree_t *run, const binary_tree_t *cross)
{
	int test = run->n;

	while (run != cross)
	{
		if (run == run->parent->right)
			if (test <= run->parent->n)
				return (0);
		if (run == run->parent->left)
			if (test >= run->parent->n)
				return (0);
		run = run->parent;
	}
	return (1);
}

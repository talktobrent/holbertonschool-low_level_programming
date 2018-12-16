#include "binary_trees.h"

long int binary_tree_is_heap_help(const binary_tree_t
		*tree, long int level);

/**
 * binary_tree_is_heap - finds if binary tree is heap
 * @tree: tree given
 * Return: 1 if true 0 otherwise
 */

int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_heap_help(tree, 0) != 0);
}

/**
 * binary_tree_is_heap_help - finds if binary tree is heap helper
 * @tree: tree given
 * @level: tracks level of recursion to compare where nodes are null, 'flips'
 * to negative after left is one deeper than right
 * Return: the level (flipped to negative if tree is not perfect) of deepest
 * leaves in a true heap tree, or 0 if untrue
 */

long int binary_tree_is_heap_help(const binary_tree_t
		*tree, long int level)
{
	long int null_level_left, null_level_right;

	if (tree == NULL)
		return (level);

	if (level != 0 && (tree->n >= tree->parent->n))
		return (0);

	null_level_left = binary_tree_is_heap_help(tree->left, level + 1);
	null_level_right = binary_tree_is_heap_help(tree->right, level + 1);

	if (null_level_left == 0 || null_level_right == 0)
		return (0);

	if (null_level_left == labs(null_level_right) + 1)
		return (-1 * null_level_right);

	if (labs(null_level_left) == null_level_right)
		return (null_level_left);

	return (0);
}

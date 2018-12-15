#include "binary_trees.h"

void binary_tree_levelorder_help(const binary_tree_t *tree, void
		(*func)(int), size_t progress, size_t level);

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_levelorder - traverses binary tree in level order
 * @tree: tree given
 * @func: function pointer
 * Description: uses loop to stop recursion at next level of stack
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level = 0, height = binary_tree_height(tree) + 1;

	if (tree == NULL)
		return;
	while (level != height)
	{
		binary_tree_levelorder_help(tree, func, 0, level);
		level++;
	}

}

/**
 * binary_tree_levelorder_help - traverses binary tree in level order
 * @tree: tree given
 * @func: function pointer
 * @progress: current depth on stack
 * @level: current level to apply func
 * Description: recurses until progress matches level
 */

void binary_tree_levelorder_help(const binary_tree_t *tree, void
		(*func)(int), size_t progress, size_t level)
{
	if (tree == NULL)
		return;
	if (level == progress)
	{
		func(tree->n);
		return;
	}
	binary_tree_levelorder_help(tree->left, func, progress + 1, level);
	binary_tree_levelorder_help(tree->right, func, progress + 1, level);
}

/**
* binary_tree_height - finds height at given tree
* @tree: pointer to root of binary tree
* Description: finds height by comparing depth of left and right
* Return: greater height between right and left
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	right = 1 + binary_tree_height(tree->right);
	left = 1 + binary_tree_height(tree->left);

	if (right > left)
		return (right);
	return (left);
}

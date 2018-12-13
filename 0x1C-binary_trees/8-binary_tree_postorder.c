#include "binary_trees.h"

/**
* binary_tree_postorder - traverses binary tree via post-order
* and runs func on each node
* @tree: pointer to root of binary tree
* @func: function pointer
* Description: traverses via post-order and runs func on each n value
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

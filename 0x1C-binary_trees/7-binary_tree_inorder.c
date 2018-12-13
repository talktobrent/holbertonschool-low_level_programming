#include "binary_trees.h"

/**
* binary_tree_inorder - traverses binary tree via in-order
* and runs func on each node
* @tree: pointer to root of binary tree
* @func: function pointer
* Description: traversesvia in-order and runs func on each n value
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

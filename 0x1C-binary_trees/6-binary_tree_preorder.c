#include "binary_trees.h"

/**
* binary_tree_preorder - traverses binary tree via preorder
* @tree: pointer to root of binary tree
* @func: function pointer
* Description: traverses via preorder and runs func on each n value
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}

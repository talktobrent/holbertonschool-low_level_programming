#include "binary_trees.h"

/*
* binary_tree_preorder - traverses binary tree via preorder and runs func on each node
* @tree: pointer to root of binary tree
* @fun: function pointer
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}

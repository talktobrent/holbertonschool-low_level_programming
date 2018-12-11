#include "binary_trees.h"

/*
* binary_tree_delete - deletes whole binary tree
* @tree: pointer to root of binary tree
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	if (tree->left != NULL)
		free(tree->left);
	if (tree->right != NULL)
		free(tree->right);
	if (tree->parent == NULL)
		free(tree);
}

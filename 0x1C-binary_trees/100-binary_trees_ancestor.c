#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds lowest ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: NULL of first or second NULL, NULL if no ancestor, or pointer
 * to lowest ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *two_mover;
	binary_tree_t *one_mover = (binary_tree_t *)first;

	while (one_mover != NULL)
	{
		two_mover = (binary_tree_t *)second;
		while (two_mover != NULL)
		{
			if (two_mover == one_mover ||
					two_mover == one_mover->parent)
				return (two_mover);
			two_mover = two_mover->parent;
		}
		one_mover = one_mover->parent;
	}
	return (NULL);
}

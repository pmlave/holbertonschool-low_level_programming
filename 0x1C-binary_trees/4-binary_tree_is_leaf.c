#include "binary_trees.h"

/**
 * binary_tree_is_leaf - determining if a node has children
 * @node: The node to check
 * Return: 1 if leaf, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left || node->right)
		return (0);
	return (1);
}

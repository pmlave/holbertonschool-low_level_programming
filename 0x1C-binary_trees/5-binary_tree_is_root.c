#include "binary_trees.h"

/**
 * binary_tree_is_root - determining if a node is root
 * @node: The node to check
 * Return: 1 if leaf, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}

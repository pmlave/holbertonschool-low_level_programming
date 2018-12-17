#include "binary_trees.h"
/**
 * binary_tree_depth - calculate the depth of a node in a tree
 * @tree: Pointer to node to measure
 * Return: Depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		count++;
	}
	return (count);

}

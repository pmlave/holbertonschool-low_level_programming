#include "binary_trees.h"
/**
 * binary_tree_size - calculate the size of the binary tree (number of nodes)
 * @tree: Pointer to the root node
 * Return: Size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count += binary_tree_size(tree->left) + 1;
	count += binary_tree_size(tree->right) + 1;
	return (count - 1);
}

#include "binary_trees.h"
/**
 * binary_tree_height - calculate height of the binary tree
 * @tree: Pointer to root node
 * Return: Height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	i = binary_tree_height(tree->left) + 1;
	j = binary_tree_height(tree->right) + 1;
	if (j > i)
		return (j);
	return (i);
}

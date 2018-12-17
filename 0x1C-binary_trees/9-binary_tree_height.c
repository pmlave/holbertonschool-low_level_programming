#include "binary_trees.h"
/**
 * binary_tree_height - calculate height of the binary tree
 * @tree: Pointer to root node
 * Return: Height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	while (tree->left || tree->right)
	{
		if (tree->left)
		{
			tree = tree->left;
			count++;
		}
		else
		{
			tree = tree->right;
			count++;
		}
	}
	return (count);

}

#include "binary_trees.h"

/**
 * binary_tree_is_full - checking if the binary tree is full
 * @tree: Pointer to the root node
 * Return: 1 if yes, 0 if no
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree->left)
	    == binary_tree_is_full(tree->right))
		return (1);
	else
		return (0);
}

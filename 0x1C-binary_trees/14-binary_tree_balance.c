#include "binary_trees.h"

/**
 * binary_tree_balance - find the balance factor of the tree
 * @tree: Pointer to the root node
 * Return: Balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}

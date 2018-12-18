#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checking if the binary tree is perfect
 * @tree: Pointer to root node
 * Return: 1 for yes, 0 for no
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 1 &&
	    binary_tree_balance(tree) == 0)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}

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

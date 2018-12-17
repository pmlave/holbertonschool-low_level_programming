#include "binary_trees.h"
/**
 * binary_tree_postorder - printing a binary tree using post order traversal
 * @tree: Pointer to root node
 * @func: Printing function to use
 * Return: Void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

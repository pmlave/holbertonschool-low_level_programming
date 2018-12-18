#include "binary_trees.h"

/**
 * binary_tree_uncle - finding if a node has an uncle
 * @node: The node to check for an uncle
 * Return: Pointer to node of uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

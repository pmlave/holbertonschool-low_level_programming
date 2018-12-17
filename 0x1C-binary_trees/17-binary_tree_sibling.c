#include "binary_trees.h"

/**
 * binary_tree_sibling - determine if a node has any siblings
 * @node: The node to check for siblings
 * Return: Pointer to sibling node or NULL if none
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

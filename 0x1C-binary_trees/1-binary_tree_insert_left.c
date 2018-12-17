#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserting a node as the left child
 * @parent: Parent node pointer
 * @value: Value for struct
 * Return: Pointer to child node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);
	child->n = value;
	child->left = NULL;
	child->right = NULL;
	if (parent->left)
	{
		parent->left->parent = child;
		child->left = parent->left;

	}
		parent->left = child;
	child->parent = parent;
	return (child);
}

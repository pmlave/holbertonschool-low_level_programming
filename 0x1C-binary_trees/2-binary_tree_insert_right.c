#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserting a node as the right child
 * @parent: Parent node pointer
 * @value: Value for struct
 * Return: Pointer to child node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);
	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);
	child->n = value;
	child->left = NULL;
	child->right = NULL;
	if (parent->right)
	{
		parent->right->parent = child;
		child->right = parent->right;
	}
	parent->right = child;
	child->parent = parent;
	return (child);
}

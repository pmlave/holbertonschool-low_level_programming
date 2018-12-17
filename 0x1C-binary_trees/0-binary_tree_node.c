#include "binary_trees.h"

/**
 * binary_tree_node - creating a new node for the binary tree
 * @parent: Parent node pointer
 * @value: Value to put into struct
 * Return: Pointer to child node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (!child)
	{
		return (NULL);
	}
	child->parent = parent;
	child->n = value;
	child->left = NULL;
	child->right = NULL;
	return (child);
}

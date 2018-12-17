#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves on a binary tree
 * @tree: Pointer to the root node
 * Return: The number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        if (!tree->left && !tree->right)
                return (0);
        return (binary_tree_nodes(tree->left)
                + binary_tree_nodes(tree->right) + 1);

}

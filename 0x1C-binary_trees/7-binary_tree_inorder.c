#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree in pre-order
 * @tree: Pointer to root node
 * @func: Function to call on each node
 * Return: Void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
        if (!func)
                return;
        if (!tree)
                return;
        binary_tree_inorder(tree->left, func);
        func(tree->n);
        binary_tree_inorder(tree->right, func);
}

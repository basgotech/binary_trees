#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using pre-order traversal
 * and apply a function to each node.
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func:  Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

/* If tree or func is NULL, do nothing */
if (tree == NULL || func == NULL)
{
return;
}

/* Apply the function to the current node's value */
func(tree->n);

/* Recursively traverse the left and right subtrees */
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}

#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree in post-order
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each nodes
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}

/* Traverse left sub tree of nodes*/
binary_tree_postorder(tree->left, func);

/* Traverse right sub tree of nodes*/
binary_tree_postorder(tree->right, func);

/* Visit root node to the function */
func(tree->n);
}

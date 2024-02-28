#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively delete the binary tree 
 * starting from the given node.
 *
 * Parameters:
 *   tree - Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
/* If the tree is NULL, do nothing */
return;
}

/* Recursively delete the left and right subtrees */
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

/* Free the memory for the current node */
free(tree);
}

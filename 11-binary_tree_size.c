#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

size_t ls;
size_t rs;

if (tree == NULL)
{
return 0;
}

/* Recursively calculate the size of the left and right subtrees */
ls = binary_tree_size(tree->left);
rs = binary_tree_size(tree->right);

/* Return the total size, including the current node */
return (1 + ls + rs);
}

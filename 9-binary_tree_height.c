#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Return the maximum height of the left and
 * right subtrees plus 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lht, rht;
/* Base case: If the tree is empty, height is 0 */
if (tree == NULL)
{
return (0);
}
/* Recursively calculate the height of the left subtree */
lht = binary_tree_height(tree->left);

/* Recursively calculate the height of the right subtree */
rht = binary_tree_height(tree->right);

return ((lht > rht ? lht : rht) +1);
}

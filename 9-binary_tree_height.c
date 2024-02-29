#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lht, rht;

/* Base case: If the tree is empty or a leaf, height is 0 */
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
{
return (0);
}
/* Recursively calculate the height of the left subt ree */
lht = binary_tree_height(tree->left);

/* Recursively calculate the height of the right subt ree */
rht = binary_tree_height(tree->right);

/* Return the maximum height*/
return ((lht > rht ? lht : rht) +1);
}


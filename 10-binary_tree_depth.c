#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth nodes in a binary tree
 * @tree: Pointer to the node to measure the depth pf bnt.
 * Return: The depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t dp;

/* Initialize depth to 0 */
dp = 0;

 /* Traverse up the tree until the root is reached */
for (; tree != NULL && tree->parent != NULL; dp++)
{
tree = tree->parent;
}

/* Return the calculated depth */
return (dp);
}

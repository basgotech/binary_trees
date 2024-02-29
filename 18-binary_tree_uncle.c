#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *                     in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 * Return: If node is NULL or has no uncle, NULL.Otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *fam;
binary_tree_t *gfam;

if (node == NULL || node->parent == NULL ||
node->parent->parent == NULL)
{
return (NULL);
}
fam = node->parent;
gfam = fam->parent;

if (gfam->left != NULL && gfam->right != NULL)
{
if (gfam->left == fam)
{
return (gfam->right);
}
else
{
return (gfam->left);
}
}
return (NULL);
}

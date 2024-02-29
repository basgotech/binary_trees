#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the number of leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count leaves node.
 *
 * Return: Number of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t lls;
size_t rls;
size_t total_grapper;

/* If tree is NULL, return 0 */
if (tree == NULL)
{
return (0);
}

/* If the node is a leaf, return 1 */
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

/* Recursively count leaves in the left and right subtrees */
lls = binary_tree_leaves(tree->left);
rls = binary_tree_leaves(tree->right);

/* adding total grapper */
total_grapper = lls + rls;
/* Return the total number of leaves */
return (total_grapper);
}

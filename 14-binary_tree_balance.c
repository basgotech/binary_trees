#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return:
 *   Balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{

int lht;
int rht;

/* If tree is NULL, return 0 */
if (tree == NULL)
{
return (0);
}

/* Calculate the height of the left and right subtrees */
lht = binary_tree_height(tree->left);
rht = binary_tree_height(tree->right);

/* Calculate and return the balance factor */
return (lht - rht);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t ltree = tree->left ? 1 + binary_tree_height(tree->left) : 1;
size_t rtree = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return ((ltree > rtree) ? ltree : rtree);
}
return (0);
}

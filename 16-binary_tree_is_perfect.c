#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root of the binary tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
		
return (binary_tree_is_perfect(tree->left) -
binary_tree_height(tree->right) == 0 ? 1 : 0);
}



/**
 * get_max - Returns the maximum of two size_t values.
 * @swapa: First size_t value.
 * @swapb: Second size_t value.
 *
 * Return: The maximum of swapa and swapb.
 */
size_t get_max(size_t swapa, size_t swapb)
{
if (swapa > swapb)
{
return (swapa);
}
else
{
return (swapb);
}
}


/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root of the binary tree.
 *
 * Return: The height of the binary tree.
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

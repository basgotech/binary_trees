#include "binary_trees.h"


/**
 * binary_tree_is_perfect- Check if a binary tree is perfect.
 *
 * Parameters:
 *   tree - Pointer to the root node of the tree to check
 *
 * Returns:
 *   1 if the binary tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree) {
    if (tree == NULL) {
        return 0; 
    }

    size_t ht = binary_tree_height(tree);


    size_t pno = (1 << ht) - 1;


    size_t anod = 0;
    while (tree != NULL) {
        anod++;
        tree = tree->left;
    }


    return anod == pno;
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

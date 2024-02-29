#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node.
 * @node: Pointer to the node for which to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling or invalid input.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }

    binary_tree_t *parent = node->parent;

    if (parent->left != NULL && parent->left != node)
    {
        return (parent->left);
    }
    else if (parent->right != NULL && parent->right != node)
    {
        return (parent->right);
    }

    return (NULL);
}

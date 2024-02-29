#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a new node as the
 * right-child of the given parent node
 * @parent: Pointer to the parent node where the new node
 * will be inserted as the right-child
 * @value: Value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or
 * NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

binary_tree_t *new_node_allo;

if (parent == NULL)
{
return (NULL);
}

new_node_allo = malloc(sizeof(binary_tree_t));

if (new_node_allo == NULL)
{
return (NULL);
}

new_node_allo->n = value;
new_node_allo->parent = parent;
new_node_allo->left = NULL;

/* If parent already has a right-child, move it to the right of the new node */
if (parent->right != NULL)
{
new_node_allo->right = parent->right;
new_node_allo->right->parent = new_node_allo;
}
else
{
new_node_allo->right = NULL;
}

/* Set the new node as the right-child of the parent */
parent->right = new_node_allo;

return (new_node_allo);
}

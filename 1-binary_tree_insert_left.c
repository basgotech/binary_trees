#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a new node as the left-child
 *  of the given parent node.
 * @parent: Pointer to the parent node where the new node
 *  will be inserted as the left-child
 * @value: Value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL of failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *new_node_allo;

/*  Check if the parent is NULL */
if (parent == NULL)
{
return (NULL);
}

/* Allocate memory for the new node */
new_node_allo = malloc(sizeof(binary_tree_t));

/* Check for memory allocation failure */
if (new_node_allo == NULL)
{
return (NULL);
}

/* Initialize the new node with the provided values */
new_node_allo->n = value;
new_node_allo->parent = parent;
new_node_allo->right = NULL;

/* If parent already has a left-child, move it to the left of the new node */
if (parent->left != NULL)
{
new_node_allo->left = parent->left;
new_node_allo->left->parent = new_node_allo;
}
else
{
new_node_allo->left = NULL;
}
/* Set the new node as the left-child of the parent */
parent->left = new_node_allo;

return (new_node_allo);
}

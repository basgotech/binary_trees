#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node_coll;
new_node_coll = malloc(sizeof(binary_tree_t));
/* Check for memory allocation failure */
if (new_node_coll == NULL)
{
return (NULL);
}
/* Initialize the new node with the provided values */
new_node_coll->n = value;
new_node_coll->parent = parent;
new_node_coll->left = NULL;
new_node_coll->right = NULL;
/* Return a pointer to the newly created node */
return (new_node_coll);
}


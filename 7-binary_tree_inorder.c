#include "binary_trees.h"

/**
 * Traverse a binary tree using in-order traversal and 
 * apply a function to each node.
 *
 * @tree - Pointer to the root node
 * @func - Pointer to a function to call for each nodes
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
const binary_tree_t *current_node;
const binary_tree_t *stack_holder[1000];
int upper;
/* If tree or func is NULL, do nothing */
if (tree == NULL || func == NULL)
{
return;
}
/* Create an auxiliary stack to simulate recursion */

/* Initialize top of the stack */
upper = -1;

current_node = tree;

while (current_node != NULL || upper != -1)
{
/* Traverse left subtree and push nodes onto the stack*/
while (current_node != NULL)
{
stack_holder[++upper] = current_node;
current_node = current_node->left;
}
/* Pop a node from the stack and process it */
current_node = stack_holder[upper--];
func(current_node->n);

/* Move to the right subtree */
current_node = current_node->right;
}
}

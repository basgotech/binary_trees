#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return:
 *   Height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);  
}

size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);


return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_count_nodes - Calculate the number of nodes in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count nodes
 *
 * Return:
 *   Number of nodes in the binary tree
 */
size_t binary_tree_count_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);  
}


size_t left_nodes = binary_tree_count_nodes(tree->left);
size_t right_nodes = binary_tree_count_nodes(tree->right);

return (1 + left_nodes + right_nodes);
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return:
 *   1 if the binary tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    
if (tree == NULL)
{
return (0);  
}

size_t height = binary_tree_height(tree);
size_t nodes = binary_tree_count_nodes(tree);


size_t perfect_nodes = (1 << height) - 1;
    
return (nodes == perfect_nodes);
}

#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{

size_t lls;
size_t rls;
size_t total_grapper;

total_grapper = 0;

/* If tree is NULL, return 0 */
if (tree == NULL)
{
return (0);
}

/* If the node is a leaf, return 1 */
if (tree->left != NULL || tree->right != NULL)
{
total_grapper += 1;
}

/* Recursively count nodes in the left and right subtrees */
lls = binary_tree_nodes(tree->left);
rls = binary_tree_nodes(tree->right);

/* adding total grapper */
total_grapper += lls + rls;

/* Return the total number of leaves */
return (total_grapper);

}

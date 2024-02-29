#include "binary_trees.h"


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_perfect(tree->left) -
	 binary_tree_height(tree->right) == 0 ? 1 : 0);
}




size_t maximum(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}



size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (maximum(left_height, right_height) + 1);
}

#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the numbers of leaves in a tree
 * @tree: tree to determine no. of leaves
 * Return: 0 if tree is NULL, else no. of leaves
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
		return (0);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1 + left_leaves + right_leaves);
	return (right_leaves + left_leaves);
}

#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: tree height to be determined
 * Return: tree height or 0 if tree is NULL
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		left_depth = binary_tree_depth(tree->left->parent);
	return 1 + left_depth;

}

#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: tree height to be determined
 * Return: tree height or 0 if tree is NULL
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	if (tree == NULL || tree->parent == NULL)
		return (0);
	left_height = binary_tree_depth(tree->left);
	right_height = binary_tree_depth(tree->right);

	return 1 + ((left_height > right_height) ? left_height : right_height);
}

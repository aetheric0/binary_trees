#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: tree height to be determined
 * Return: tree height or 0 if tree is NULL
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}

#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to tree
 * Return: 1 if it is full, 0 otherwise
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}

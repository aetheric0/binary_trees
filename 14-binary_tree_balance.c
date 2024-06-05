#include "binary_trees.h"

/**
 * binary_tree_balance - determines the balance factor of a binary tree
 * @tree: binary tree
 * Return: 0 if tree is NULL, otherwise the balance factor number
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_factor, right_factor;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	left_factor = binary_tree_balance(tree->left);
	right_factor = binary_tree_balance(tree->right);
	return (1 + left_factor - right_factor);
}

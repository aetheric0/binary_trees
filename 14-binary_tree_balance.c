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
	left_factor = (tree->left) ? 1 + binary_tree_balance(tree->left): 0;
	right_factor = (tree->right) ? 1 + binary_tree_balance(tree->right): 0;
	return (left_factor - right_factor);
}

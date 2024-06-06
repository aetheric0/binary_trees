#include "binary_trees.h"

/**
 * binary_tree_is_bst - Determines if a binary tree is a BST
 * @tree: pointer to root
 * Return: 1 if tree is valid BST, 0 otherwise
 **/

int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (is_bst_util(tree, INT_MIN, INT_MAX));
}

/**
 * is_bst_util - Utility function to check if a binary tree is a valid BST.
 * @node: A pointer to the current node being checked
 * @min: The minimum allowed value for the current node.
 * @max: The maximum allowed value for the current node.
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 **/

int is_bst_util(const binary_tree_t *node, int min, int max)
{
	if (node == NULL)
		return (0);
	if (node->n <= min || node->n >= max)
		return (0);

	return (is_bst_util(node->left, min, node->n) &&
		is_bst_util(node->right, node->n, max));
}

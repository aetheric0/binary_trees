#include "binary_trees.h"

/**
 * binary_tree_is_complete - Determines if a binary tree is complete
 * @tree: Pointer to tree
 * Return: 1 if true, otherwise 0
 **/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	return (is_complete_util(tree, 0, tree_size(tree)));
}

/**
 * is_complete_util - Utility function to check if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 * @index: The current index of the node being checked.
 * @size: The total number of nodes in the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int is_complete_util(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete_util(tree->left, 2 * index + 1, size) &&
		is_complete_util(tree->right, 2 * index + 2, size));
}

/**
 * tree_size - Calculates the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The size of the tree.
 */

size_t tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + tree_size(tree->left) + tree_size(tree->right));
}

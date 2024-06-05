#include "binary_trees.h"

/**
 * binary_tree_is_perfect - determines if a binary tree is perfect
 * @tree: pointer to root node
 * Return: 1 if perfect, otherwise 0
**/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height =  binary_tree_height(tree->right);
	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
	}
	else
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}

/**
 * binary_tree_height - determines the height of a tree (or subtree)
 * @tree: pointer to root of tree
 * Return: height of the tree, otherwise 0
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ?
		left_height + 1 : right_height + 1);
}

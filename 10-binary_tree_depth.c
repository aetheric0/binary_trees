#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a binary tree node
 * @tree: pointer to tree
 * Return: tree depth or 0 if tree is NULL
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}

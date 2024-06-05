#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: binary tree
 * Return: 0 if tree is NULL, else no. of nodes with at least a child
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + left_nodes + right_nodes);
	return (left_nodes + right_nodes);
}

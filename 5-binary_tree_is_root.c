#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is root
 * @node: node to check
 * Return: 1 if root, 0 if otherwise or node is NULL
 **/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}

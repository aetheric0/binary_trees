#include "binary_trees.h"

/**
 * binary_tree_sibling - determines the sibling of a given node
 * @node: node whose sibling is to be determined
 * Return: pointer to sibling, NULL if none
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left_sibling, *right_sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	left_sibling = node->parent->left;
	right_sibling = node->parent->right;
	if (left_sibling != NULL && left_sibling != node)
		if (node->parent == left_sibling->parent)
			return (left_sibling);
	if (right_sibling != NULL && right_sibling != node)
		if (node->parent == right_sibling->parent)
			return (right_sibling);
	return (NULL);
}

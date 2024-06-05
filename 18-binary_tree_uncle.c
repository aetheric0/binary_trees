#include "binary_trees.h"

/**
 * binary_tree_uncle - determines the uncle of a given node
 * @node: node whose uncle is to be determined
 * Return: pointer to uncle, NULL if none
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *left_uncle, *right_uncle;

	if (node == NULL || node->parent == NULL
	    || node->parent->parent == NULL)
		return (NULL);
	left_uncle = node->parent->parent->left;
	right_uncle = node->parent->parent->right;
	if (left_uncle != NULL && left_uncle != node->parent)
		if (node->parent->parent == left_uncle->parent)
			return (left_uncle);
	if (right_uncle != NULL && right_uncle != node->parent)
		if (node->parent->parent == right_uncle->parent)
			return (right_uncle);
	return (NULL);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node into the left node of parent node
 * @parent: parent node
 * @value: value of new left node
 * Return: pointer to the created node
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = parent->left;
	newnode->right = NULL;
	newnode->parent = parent;

	if (parent->left != NULL)
		parent->left->parent = newnode;
	parent->left = newnode;

	return (newnode);
}

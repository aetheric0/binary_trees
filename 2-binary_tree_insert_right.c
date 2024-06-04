#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a right node to the parent
 * @parent: parent node
 * @value: value of new right node
 * Return: pointer to new right node
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->right = parent->right;
	newnode->left = NULL;
	newnode->parent = parent;

	if (parent->right != NULL)
		parent->right->parent = newnode;
	parent->right = newnode;

	return (newnode);
}

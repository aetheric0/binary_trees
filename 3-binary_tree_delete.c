#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root of tree
 **/

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp, *holder;

	if (tree == NULL)
	{
		return;
	}
	temp = tree->left->left;
	while (temp != NULL)
	{
		holder = temp->left;
		free(temp);
		temp = holder;
	}
	temp = tree->left->right;
	while (temp != NULL)
	{
		holder = temp->right;
		free(temp);
		temp = holder;
	}
	free(tree->left);

	temp = tree->right->left;
	while (temp != NULL)
	{
		holder = temp->left;
		free(temp);
		temp = holder;
	}

	temp = tree->right->right;
	while (temp != NULL)
	{
		holder = temp->right;
		free(temp);
		temp = holder;
	}
	free(tree->right);

	free(tree);
}

#include "binary_trees.h"

/**
 * binary_tree_balance - determines the balance factor of a binary tree
 * @tree: binary tree
 * Return: 0 if tree is NULL, otherwise the balance factor number
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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

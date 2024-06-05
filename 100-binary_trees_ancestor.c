#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to Ancestor, NULL otherwise
 **/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *first_holder, *second_holder;

	first_holder = (binary_tree_t *)first;
	second_holder = (binary_tree_t *)second;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return (first_holder);
	if (second->parent == first)
		return (first_holder);
	if (first->parent == second)
		return (second_holder);
	if (first->parent != NULL && second->parent != NULL)
	{
		if (first->parent == second->parent)
			return (first->parent);
		if (first->parent->parent != NULL &&
		    second->parent->parent != NULL)
		{
			if (first->parent->parent == second->parent->parent)
				return (first->parent->parent);
			if (first->parent == second->parent->parent)
				return (second->parent->parent);
			if (second->parent == first->parent->parent)
				return (first->parent->parent);
		}
	}
	return (NULL);
}

#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle node
 * @pointer to node to find uncle
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	grandparent = parent->parent;
	if (grandparent->left == NULL || grandparent->right == NULL)
	{
		return (NULL);
	}
	return ((parent == grandparent->left) ? grandparent->right : grandparent->left);
}

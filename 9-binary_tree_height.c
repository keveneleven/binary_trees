#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height
 * of a node in a binary tree
 * @tre: Pointer to root node of the the tree to meaasure the height
 *
 * Return: Height else 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;
	if (tree)
	{
		left =tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right) ? left : right);
	}

	return (0);
}

#include "binary_trees.h"

/**
 * binaryt_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count
 *
 * Return: Number of nodes, 0 if treeis NULL
 * A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->right);
		nodes += binary_tree_nodes(tree->left);
	}

	return (nodes);
}

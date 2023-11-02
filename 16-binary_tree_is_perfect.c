#include "binary_trees.h"
/**
 * binary_tree_height - check height of tree
 * @tree: pointer to node
 * Return: binary tree height calculated
 */

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_full - check if binary is full
 * @tree: pointer to node of tree
 * Return: binary tree that has 2 children
 */
int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if binary is perfect
 * @tree:pointer to node of tree to check from
 * Return: perfect tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
	{
		return (0);
	}
	height = binary_tree_height(tree);
	return (binary_tree_is_full(tree) && height);
}

/**
 * binary_tree_height - calculate height of binary tree
 * @tree: pointer to root node of tree to measure from
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}

/**
 * binary_tree_is_full - checks to see if binary tree is full
 * @tree: pointer to root node of tree to check from
 * Return: full binary tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}


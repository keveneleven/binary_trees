#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the ancestoe node
 * @first: first node
 * @seconf: second node
 * Return: ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int i;
	int first_depth = 0, second_depth = 0;
	binary_tree_t *ancestors_first[100];
	binary_tree_t *ancestors_second[100];
	binary_tree_t *ancestor, *anc;

	if (first == NULL || second == NULL)
		return (NULL);
	for (i = 0; i < 100; i++)
	{
		ancestors_first[i] = NULL;
		ancestors_second[i] = NULL;
	}
	ancestor = (binary_tree_t *)first;
	while (ancestor != NULL)
	{
		ancestors_first[first_depth] = ancestor;
		ancestor = ancestor->parent;
		first_depth++;
	}
	ancestor = (binary_tree_t *)second;
	while (ancestor != NULL)
	{
		ancestors_second[second_depth] = ancestor;
		ancestor = ancestor->parent;
		second_depth++;
	}
	anc = NULL;
	while (first_depth >= 0 && second_depth >= 0)
	{
		if (ancestors_first[first_depth] == ancestors_second[second_depth])
			anc = ancestors_first[first_depth];
		else
			break;
	}
	first_depth--;
	second_depth--;
	return lca;
}


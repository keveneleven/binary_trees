#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->parent == NULL) ? 1 : 0;
}


#include "binary_trees.h"
/**
 */

int binary_tree_is_leaf(const binary_tree_t *node)

{
	binary_tree_is_leaf *node;

	node = malloc(sizeof(*node));

	if (node == NULL)
	{
		return (NULL);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (const binary_tree_t);
}

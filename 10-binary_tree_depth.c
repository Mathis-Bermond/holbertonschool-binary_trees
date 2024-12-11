#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node in the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}

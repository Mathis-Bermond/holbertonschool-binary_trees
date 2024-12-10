#include "binary_trees.h"
/**
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

{
	if (tree == NULL || func == NULL)

	{
		return;
	}

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);


}

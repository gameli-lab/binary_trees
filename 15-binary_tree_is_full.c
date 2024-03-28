#include "binary_trees.h"


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * return: 0 if full otherwise 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	else
		return (0);
	return (((binary_tree_is_full(tree->left)  && ()) || () && ());
}

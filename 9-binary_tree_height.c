#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * return: height of the node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	height = (left_height > right_height ? left_height : right_height) + 1;

	return (height);
}

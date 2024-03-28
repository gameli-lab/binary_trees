#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * return: the balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, balance_factor;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance(tree->left);

	right_height = binary_tree_balance(tree->right);

	balance_factor = left_height - right_height;

	return (balance_factor);
}

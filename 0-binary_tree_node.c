#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * parent: the root of the data structure
 * value: value assigned to the parent
 * return: a pointer to the new node or NULL on failure
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

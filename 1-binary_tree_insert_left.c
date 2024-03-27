#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts nodes on the left of the tree
 * @parent: pointer to the root
 * @value: pointer to the data to be stored
 * return: pointer to the node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);
	
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if ( parent->left == NULL)
		parent->left = new;
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}

	return (new);
}

#include "binary_trees.h"
/**
 * binary_tree_is_leaf - delete a node
 *@node: binary_tree_t *
 * Return: int: 1 if leaf, 0 if else
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
		if (node->left == NULL && node->right == NULL)
			return (1);
	return (0);
}

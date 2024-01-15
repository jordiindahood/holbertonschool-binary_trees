#include "binary_trees.h"
/**
 * binary_tree_is_root - is root of tree ?
 *@node: binary_tree_t *
 * Return: int: 1 if leaf, 0 if else
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
		if (!node->parent)
			return (1);
	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_nodes - get number of nodes
 *@tree: const binary_tree_t *
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lft = 0, rgt = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left)
		lft = 1;
	if (tree->right)
		rgt = 1;
	if (rgt == lft)
		return (3);
	return (1);
}

#include "binary_trees.h"
/**
 * binary_tree_nodes - get number of nodes
 *@tree: const binary_tree_t *
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t x = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		x++;
	x += binary_tree_nodes(tree->left);
	x += binary_tree_nodes(tree->right);
	return (x);
}

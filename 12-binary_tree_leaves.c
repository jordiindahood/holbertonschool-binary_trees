#include "binary_trees.h"
/**
 * binary_tree_leaves - get number of leaves
 *@tree: const binary_tree_t *
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t x = 0, y = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
		x = binary_tree_leaves(tree->left);
	if (tree->right)
		y = binary_tree_leaves(tree->right);
	return (x + y);
}

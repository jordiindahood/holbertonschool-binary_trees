#include "binary_trees.h"
/**
 * binary_tree_is_perfect - see if tree is perfect or not
 *@tree: const binary_tree_t *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && binary_tree_is_full(tree))
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
			return (1);
	return (0);
}
/**
 * binary_tree_is_full - see if tree is full or not
 *@tree: const binary_tree_t *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
/**
 * binary_tree_height - get height
 *@tree: const binary_tree_t *
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (right < left)
		return (left);
	else
		return (right);
}

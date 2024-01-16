#include "binary_trees.h"
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
		right = binary_tree_height(tree->right);
	if (tree->left)
		left = binary_tree_height(tree->left);
	if (right < left)
		return (1 + left);
	else
		return (1 + right);
}
/**
 * binary_tree_balance - see if a tree is balanced
 *@tree: const binary_tree_t *
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lft = 0, rgt = 0;

	if (!tree)
		return (0);
	lft = binary_tree_height(tree->left);
	rgt = binary_tree_height(tree->right);
	return (lft - rgt);
}

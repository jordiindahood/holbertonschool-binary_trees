#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of the node
 *@node: const binary_tree_t *
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (0);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

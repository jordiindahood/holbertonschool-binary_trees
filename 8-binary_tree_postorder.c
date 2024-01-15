#include "binary_trees.h"
/**
 * binary_tree_postorder - Post-Order Traversal
 *@tree: const binary_tree_t **
 *@func: void (*)(int)
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

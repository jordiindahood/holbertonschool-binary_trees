#include "binary_trees.h"
/**
 * binary_tree_node - create a child
 *@parent: binary_tre_t *
 *@value: int
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (!parent)
	{
		parent->n = value;
		parent->right = NULL;
		parent->left = NULL;
		return (parent);
	}
	return (NULL);
}

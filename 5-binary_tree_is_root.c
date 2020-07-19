#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks
 * if a node is root
 * @node: Pointer to tree
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}

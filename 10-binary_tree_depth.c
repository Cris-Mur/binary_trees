#include "binary_trees.h"

/**
 * binary_tree_depth - that measures the depth
 * of a node in a binary tree
 * @tree: Pointer to tree
 * Return: 0 If tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deepr = 0;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		deepr++;
		deepr += binary_tree_depth(tree->parent);
	}
	return (deepr);
}

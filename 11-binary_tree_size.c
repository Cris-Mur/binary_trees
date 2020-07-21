#include "binary_trees.h"

/**
 * binary_tree_size - that measures the size
 * of a binary tree
 * @tree: Pointer to tree
 * Return: 0 If tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size++;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}

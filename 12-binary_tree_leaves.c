#include "binary_trees.h"

/**
 * binary_tree_leaves - that measures the leafs
 * of a binary tree
 * @tree: Pointer to tree
 * Return: 0 If tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		leaf += binary_tree_leaves(tree->left);
		leaf += binary_tree_leaves(tree->right);
	}
	else
		leaf++;
	return (leaf);
}

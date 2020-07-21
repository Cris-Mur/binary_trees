#include "binary_trees.h"

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: Pointer to tree to delete
 * Return: the height of tree or 0 if it's null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		counter++;
		binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		counter++;
		binary_tree_height(tree->right);
	}
	return (counter);
}

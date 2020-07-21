#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks
 * if a binary tree is full
 * @tree: iis a pointer to the root of tree
 * Return: 0 If tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->left) && (!tree->right))
		return (1);
	else if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	else
		return (0);
}

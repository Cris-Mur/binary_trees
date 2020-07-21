#include "binary_trees.h"

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: Pointer to tree to delete
 * Return: the height of tree or 0 if it's null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cleft = 0;
	size_t cright = 0;
	size_t bigger = 0;


	if (!tree)
		return (0);

	if (tree->left)
	{
		cleft++;
		cleft += binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		cright++;
		cright += binary_tree_height(tree->right);
	}


	if (cleft > cright)
		bigger = cleft;
	if (cright >= cleft)
		bigger = cright;
	return (bigger);
}

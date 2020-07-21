#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a
 * binary tree using post-order traversal
 * @tree: Pointer to tree to delete
 * @func: function to print number
 * Return: none
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

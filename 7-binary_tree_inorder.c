#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a
 * binary tree using in-order traversal
 * @tree: Pointer to tree to delete
 * @func: function to print number
 * Return: none
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

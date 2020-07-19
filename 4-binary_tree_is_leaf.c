#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks
 * if a node is leaf
 * @node: Pointer to tree to delete
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if(!node)
		return(0);
	if(!node->left && !node->right)
		return (1);
	else
		return (0);
}

#include "binary_trees.h"
#include "13-binary_tree_nodes.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((!node || !node->parent) || (!node->parent->left && !node->parent->right))
		return (NULL);
	if (node->parent && node->parent->left != node)
		return (node->parent->left);
	else
		return (node->parent->right);
}

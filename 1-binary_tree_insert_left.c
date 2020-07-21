#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that creates a new node
 * @parent: parent of node
 * @value: value of node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;

	if (!parent)
	{
		free(node);
		return (NULL);
	}
	else if (parent->left)
	{
		node->parent = parent;
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
		return (node);
	}
	else
	{
		parent->left = node;
		node->parent = parent;
		return (node);
	}
}

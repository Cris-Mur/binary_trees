#include "binary_trees.h"
#include "13-binary_tree_nodes.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: iis a pointer to the root of tree
 * Return: 0 If tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

        if (binary_tree_nodes(tree->left) == binary_tree_nodes(tree->right))
        {
                if (binary_tree_leaves(tree->left) == binary_tree_leaves(tree->right))
                {
                        return (1);
                }
        }
        return (0);
}

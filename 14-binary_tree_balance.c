#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: iis a pointer to the root node of
 * the tree to measure the balance factor
 * Return: 0 If tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_L = 0, height_R = 0, balance = 0;

	if (!tree)
		return (0);

	height_L = binary_tree_height(tree->left);
	height_R = binary_tree_height(tree->right);

	balance = height_L - height_R;
	balance += (tree->left ? 0 : -1);
	balance -= (tree->right ? 0 : -1);

	return (balance);
}

#include "binary_trees.h"
#include "14-binary_tree_balance.c" /* for calculating tree balance */

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Tree to check
*
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect, right_perfect;

	/* Check if the tree is NULL */
	if (!tree)
		return (0);

	/* Check if the tree is a leaf node (perfect by definition) */
	if (!tree->left && !tree->right)
		return (1);

	/* Check if the tree is balanced */
	if (binary_tree_balance(tree) != 0)
		return (0);

	/* Check if both left and right subtrees exist */
	if (tree->left && tree->right)
	{
		/* Recursively check if both left and right subtrees are perfect */
		left_perfect = binary_tree_is_perfect(tree->left);
		right_perfect = binary_tree_is_perfect(tree->right);
		return (left_perfect && right_perfect);
	}

	return (0); /* If only one subtree exists, the tree is not perfect */
}

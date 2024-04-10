#include "binary_trees.h"

/**
* binary_tree_nodes - Counts nodes with at least 1 child
* @tree: Tree to measure
*
* Return: Number of nodes with children
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* If tree is NULL or a leaf node (no children), return 0 */
	if (!tree || (!tree->left && !tree->right))
		return (0);

	/* Recursively count nodes with children in the left and right subtrees */
	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}

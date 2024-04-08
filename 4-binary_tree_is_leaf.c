#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if the node is a leaf
* @node: Pointer to the node to check
*
* Return: 1 if @node is a leaf, 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if @node exists and has no children */
	if (node && !node->left && !node->right)
	{
		/* @node is a leaf */
		return (1);
	}
	else
	{
		/* @node is not a leaf */
		return (0);
	}
}

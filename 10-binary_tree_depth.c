#include "binary_trees.h"

/**
* binary_tree_depth - Returns the depth of a binary tree
* @node: Node to measure the depth from
*
* Return: Depth of the binary tree
*/
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth = 0; /* Initialize depth counter */

	/* Traverse up the tree until the root (parent is NULL) */
	while (node && node->parent)
	{
		depth++; /* Increment depth for each level up */
		node = node->parent; /* Move to the parent node */
	}

	return (depth); /* Return the depth of the tree */
}

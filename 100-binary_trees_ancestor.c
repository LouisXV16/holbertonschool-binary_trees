#include "binary_trees.h"
#include "10-binary_tree_depth.c" /* for calculating tree depth */

/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes
* @first: First node to evaluate
* @second: Second node to evaluate
*
* Return: Pointer to the lowest common ancestor, or NULL if no ancestor found
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	int depth_first, depth_second;

	/* Check if either first or second node is NULL */
	if (!first || !second)
		return (NULL);

	/* Calculate depth of first and second nodes */
	depth_first = (int)binary_tree_depth(first);
	depth_second = (int)binary_tree_depth(second);

	/**
	* Adjust depth of deeper node's ancestor until
	* both nodes are at the same depth
	*/
	while (depth_first < depth_second)
		second = second->parent, depth_second--;
	while (depth_first > depth_second)
		first = first->parent, depth_first--;

	/* Move both nodes up in the tree until their common ancestor is found */
	while (first != second && depth_first >= 0 && depth_second >= 0)
	{
		first = first->parent;
		second = second->parent;
		depth_first--;
		depth_second--;
	}

	/* If common ancestor is found, return it */
	if (depth_first >= 0 && depth_second >= 0 && first == second)
		return ((binary_tree_t *)first);

	/* No common ancestor found */
	return (NULL);
}

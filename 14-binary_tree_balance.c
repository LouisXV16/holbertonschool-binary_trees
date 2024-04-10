#include "binary_trees.h"
#include "9-binary_tree_height.c" /* Include the function for calculating tree height */

/**
 * binary_tree_balance - Checks if the binary tree is balanced
 * @tree: Tree to measure
 *
 * Return: If tree is weighted left, return positive
 *         If tree is weighted right, return negative
 *         If tree is balanced, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left, right;

    /* Check if tree is NULL */
    if (!tree)
        return (0);

    /* Calculate height of left subtree */
    left = tree->left ? binary_tree_height(tree->left) + 1 : 0;

    /* Calculate height of right subtree */
    right = tree->right ? binary_tree_height(tree->right) + 1 : 0;

    /* Return balance factor (left height - right height) */
    return (left - right);
}


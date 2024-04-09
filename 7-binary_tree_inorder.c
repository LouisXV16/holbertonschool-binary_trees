#include "binary_trees.h"

/**
  * binary_tree_inorder - Traverse the tree inorder
  * @tree: Tree to traverse
  * @func: Function pointer to printing function
  * Return: void
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if tree or function is NULL */
    if (!tree || !func)
        return;

    /* Traverse left subtree */
    binary_tree_inorder(tree->left, func);

    /* Call function to process current node */
    func(tree->n);

    /* Traverse right subtree */
    binary_tree_inorder(tree->right, func);
}


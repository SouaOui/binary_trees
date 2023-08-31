#include "binary_trees.h"
/**
 * binary_tree_leaves - function that calculate the size of the tree
 * @tree: pointer to root of the tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t count;

    if (tree == NULL)
        return (0);
    if (!tree->left && !tree->right)
        return (1);
    count = 0;
    count += binary_tree_leaves(tree->left);
    count += binary_tree_leaves(tree->right);
    return (count);
}
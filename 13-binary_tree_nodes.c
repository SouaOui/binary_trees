#include "binary_trees.h"
/**
 * binary_tree_nodes - function that calculate the size of the tree
 * @tree: pointer to root of the tree
 * Return: number of node with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count = 0;

    if (tree == NULL)
        return (0);
    if (tree->left != NULL || tree->right != NULL)
        count++;
    count += binary_tree_nodes(tree->left);
    count += binary_tree_nodes(tree->right);
    return (count);
}
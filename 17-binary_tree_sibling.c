#include "binary_trees.h"
/**
 * *binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the root node
 * Return: the result
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
	return (0);
}


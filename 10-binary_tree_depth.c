#include "binary_trees.h"
/**
 * max - returns max of two values
 * @value1: value 1
 * @value2: value 1
 * Return: the maximum
 */
size_t max(size_t value1, size_t value2)
{
	if (value1 < value2)
		return value2;
	return value1;
}
/**
 * binary_tree_height - function that calculate the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: positive number or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL || (tree->left != NULL && tree->right != NULL)) 
		return 0;
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (max(left_height, right_height) + 1);
}

#include "binary_trees.h"
/**
 * binary_tree_is_perfect -checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: the result
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int countleft, countright;

	if (tree == NULL)
		return (0);
	countleft = 0;
	countright = 0;
	countleft += binary_tree_height(tree->left);
	countright += binary_tree_height(tree->right);
	if (countleft == countright)
	{
		if (tree->left != NULL && tree->right != NULL)
		{
			return (1);
		}
	}
	return (0);
}
/**
 * binary_tree_height -the hight of a binary tree
 * @tree: pointer to the root node
 * Return: the result
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count1, count2;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	count1 = 0;
	count2 = 0;
	if (tree->left != NULL || tree->right != NULL)
	{
		count1 = binary_tree_height(tree->left);
		count2 = binary_tree_height(tree->right);
	}
	if (count1 > count2)
	{
		return (count1 + 1);
	}
	return (count2 + 1);
}


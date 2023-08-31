#include "binary_trees.h"
/**
 * binary_tree_balance -that measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: the result
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int countLeft = 0, countRight = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL)
countLeft = binary_tree_height(tree->left) + 1;
if (tree->right != NULL)
countRight = binary_tree_height(tree->right) + 1;
return (countLeft - countRight);
}

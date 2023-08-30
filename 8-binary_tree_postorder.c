#include "binary_trees.h"
/**
 * binary_tree_postorder - function that print a tree postorder method
 * @tree: pointer to the root of the tree to traverse
 * @func: function pointer that take integer
 * Return: Nothing
 **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
    func(tree->n);
}
#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that insert right to a node
 * @parent: parent of the inserted node
 * @value: value of the inserted node
 * Return: the pointer to the node added
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *save;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right  != NULL)
	{
		save = parent->right;
		new_node->right = save;
		save->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}

#include "binary_trees.h"
/**
 * binary_tree_leaves - function that check if tree is full
 * @tree: pointer to root of the tree
 * Return: the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree){
    size_t count1;
    size_t count2;
    if (tree == NULL)
        return 1;
    if ((tree->left != NULL && tree->right != NULL) || (tree->left == NULL && tree->right == NULL))
    {
        count1 = binary_tree_is_full(tree->left);
        count2 = binary_tree_is_full(tree->right);
        return (count1 && count2);
    }
    return 0;
}

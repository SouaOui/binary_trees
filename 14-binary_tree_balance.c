#include "binary_trees.h"
/**
 * binary_tree_balance - function  that measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: the result 
 */
int binary_tree_balance(const binary_tree_t *tree){
    int count1;
    int count2;
    if (tree == NULL)
        return 1;
    count1 = 0;
    count2 = 0;
    if (tree->left != NULL || tree->right != NULL)
    {
        count1 += binary_tree_balance(tree->left);
        count2 += binary_tree_balance(tree->right);
        return (count1 - count2);
    }
    return 0;
}

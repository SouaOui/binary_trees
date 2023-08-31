#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: the result 
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int countleft, countright;
    if (tree == NULL)
        return 0;
    countleft = 0;
    countright = 0;
    if ( tree->left != NULL && tree->right != NULL )
        countleft += binary_tree_is_perfect(tree->left);
        countright += binary_tree_is_perfect(tree->right);
        return (countleft - countright );

}

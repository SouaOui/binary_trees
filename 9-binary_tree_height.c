#include <stddef.h>
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t countright = 0;
    size_t countleft = 0;
    if (tree == NULL)
        return 0;
    /** if (tree->left == NULL || tree->right == NULL)
        return;
    count++;*/
    countright = binary_tree_height(tree->right);
    countright++;
    countleft = binary_tree_height(tree->left);
    countleft++;
    if (countleft > countright)
        return countleft ;
    return countright;
}




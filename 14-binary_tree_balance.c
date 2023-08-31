int binary_tree_balance(const binary_tree_t *tree)
{
    size_t count1;
    size_t count2;
    if (tree == NULL)
        return 0;

    count1 = binary_tree_balance(tree->left);
    count2 = binary_tree_balance(tree->right);
    return (count1 - count2) + 1;
}
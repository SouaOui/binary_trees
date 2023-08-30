size_t binary_tree_size(const binary_tree_t *tree)
{
    
    if (tree == NULL)
            return 0;
    size_t count = 1;
    if(!tree->left || !tree->right)
    {
        count += binary_tree_size(tree->left);
        count += binary_tree_size(tree->right);
    }
    return count;
}
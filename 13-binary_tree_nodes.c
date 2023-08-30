size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count;
    if (tree == NULL)
    {
        return 0;    
    }
    count = 0;
    if (tree->left == NULL && !tree->right)
        count += binary_tree_nodes(tree->right);
    if (tree->right == NULL && !tree->left)
        count += binary_tree_nodes(tree->right); 
    return count;  
}
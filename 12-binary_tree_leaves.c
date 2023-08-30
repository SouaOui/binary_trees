size_t binary_tree_leaves(const binary_tree_t *tree)
{ 
    size_t count;
    if (tree == NULL)
        return 0;
    count =0;
    if (tree->left == NULL || tree->right == NULL)
       /**perhaps,, logicaly itsnot correct */ count += binary_tree_leaves(tree->left);
                                                count += binary_tree_leaves(tree->right);
    return count;
}
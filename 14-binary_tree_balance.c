
int binary_tree_is_full(const binary_tree_t *tree){
    size_t count1;
    size_t count2;
    if (tree == NULL)
        return 1;
    if ((tree->lef != NULL && tree->right != NULL) || (tree->lef === NULL && tree->right == NULL))
    {
        count1 = binary_tree_is_full(tree->left);
        count2 = binary_tree_is_full(tree->right);
        return (count1 && count2) 
    }
    return 0;
}

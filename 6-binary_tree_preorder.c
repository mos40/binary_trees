/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: The value in the node must be passed as a parameter to func.
 * If tree or func is NULL, do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL && func == NULL)
		return;
	{

		func(tree->n); /* Call the function for the current node */
		binary_tree_preorder(tree->left, func); /* Recur on the left subtree */
		binary_tree_preorder(tree->right, func); /* Recur on the right subtree */
	}
}

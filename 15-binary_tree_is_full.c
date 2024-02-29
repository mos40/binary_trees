#include "binary_trees.h"

/**
 * is_full_recursive - Recursively determines whether a binary tree is full.
 * @tree: A pointer to the root node of the tree being checked.
 * @return: Returns 0 if the tree is not full; otherwise, returns 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the tree is a leaf node, it is full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both left and right subtrees are not NULL, recursively check them */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If one subtree is NULL and the other is not, the tree is not full */
	return (0);

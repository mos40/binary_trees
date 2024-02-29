#include "binary_trees.h"

/**
 * bst_search - Searches for a specified value in a binary search tree.
 * @tree: A pointer to the root node of the binary search tree.
 * @value: The value to search for in the binary search tree.
 *
 * Return: If the tree is NULL or the value is not found, return NULL.
 *         Otherwise, return a pointer to the node containing the value.
 */

bist_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}

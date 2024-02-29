#include "binary_trees.h"

/**
 *binary_tree_nodes - Count the nodes that have at least one child
 *@tree: The tree to be evaluated
 *Return: 0 when tree is NULL or a recursive function call
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Base case: if tree is NULL, return 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Initialize count to 0 */
	size_t count = 0;

	/* If the current node has at least one child, increment count */
	if (tree->left != NULL || tree->right != NULL)
	{
		count++;

	/* Recursively count nodes with at least one child in the left subtree */
	count += binary_tree_nodes(tree->left);

	/* Recursively count nodes with at least one child in the right subtree */
	count += binary_tree_nodes(tree->right);
	}
	/* Return the total count */
	return (count);
}

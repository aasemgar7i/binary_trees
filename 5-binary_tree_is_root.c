#include "binary_trees.h"

/**
 *binary_tree_is_root - check if a node is a root
 *@node: node
 *Return: boolean
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* If node is NULL, return 0 */
	if (node == NULL)
	{
		return (0);
	}

	/* If both left and right children are NULL, the node is a leaf */
	if (node->parent == NULL)
	{
		return (1);
	}

	/* If at least one child is not NULL, the node is not a leaf */
	return (0);
}

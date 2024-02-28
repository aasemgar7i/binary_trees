#include "binary_trees.h"

/**
 *binary_tree_preorder - goes through a binary tree using pre-order traversal
 *@tree: tree
 *@func:  pointer to a function to call for each node.
 *The value in the node must be passed as a parameter to this function.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base cases: if tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Call the function for the current node */
	func(tree->n);

	/* Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}


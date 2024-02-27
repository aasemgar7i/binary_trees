#include "binary_trees.h"

/**
 *binary_tree_inorder - goes through a binary tree with inorder-order traversal
 *@tree: tree
 *@func:  pointer to a function to call for each node.
 *The value in the node must be passed as a parameter to this function.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base cases: if tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* Recursively traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call the function for the current node */
	func(tree->n);

	/* Recursively traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}

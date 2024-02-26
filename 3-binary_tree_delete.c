#include "binary_trees.h"

/**
 *binary_tree_delete - delete the tree
 *@tree: root of the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* Base case: if tree is NULL, do nothing */
	if (tree == NULL)
	{
		return;
	}

	/* Recursively delete the left subtree */
	binary_tree_delete(tree->left);

	/* Recursively delete the right subtree */
	binary_tree_delete(tree->right);

	/* Free the memory allocated for the current node */
	free(tree);
}

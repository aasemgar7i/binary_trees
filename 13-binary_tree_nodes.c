#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
=======
 *binary_tree_nodes - Count the nodes that have at least one child
 *@tree: The tree to be evaluated
 *Return: 0 when tree is NULL or a recursive function call
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (0);
>>>>>>> 7f65dd1631f6e59a9cf91c41ce4382b8f58a4335
}

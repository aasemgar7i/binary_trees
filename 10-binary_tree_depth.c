#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depthof a node in a bianry tree
 * @tree: pointer to the node
 * Return:the depth, otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

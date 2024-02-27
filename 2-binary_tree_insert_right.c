#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the left-child of another node
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: The returning the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent node is NULL */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Create the new node */
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		/* Memory allocation failed, return NULL */
		return (NULL);
	}

	/* If the parent already has a left child */
	if (parent->right != NULL)
	{
		/* Set the new node's left child to the current left child of the parent */
		new_node->right = parent->right;
		/* Set the parent of the current left child to the new node */
		parent->right->parent = new_node;
	}

	/* Set the parent's left child to the new node */
	parent->right = new_node;

	/* Return a pointer to the new node */
	return (new_node);
}

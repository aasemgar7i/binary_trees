#include "binary_trees.h"

/**
 *binary_tree_node - creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: The returning the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Allocate memory for the new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
	/* Memory allocation failed, return NULL */
		return (NULL);
	}

	/* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Return a pointer to the new node */
	return (new_node);
}

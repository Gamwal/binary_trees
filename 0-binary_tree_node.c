#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value of the node to be created
 *
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node != NULL)
	{
		node->n = value;
		node->left = NULL;
		node->right = NULL;
		node->parent = parent;
	}
	else
		return (NULL);

	return (node);
}

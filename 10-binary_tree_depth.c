#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 *			in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL, else depth of Node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	if (tree->parent != NULL)
		return (depth + 1);
	return (depth);
}


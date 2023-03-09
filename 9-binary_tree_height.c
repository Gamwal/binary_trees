#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL, else height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ls, rs;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);
	ls = binary_tree_height(tree->left);
	rs = binary_tree_height(tree->right);
	if (ls > rs)
		return (ls + 1);
	return (rs + 1);
}

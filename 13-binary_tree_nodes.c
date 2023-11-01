#include "binary_trees.h"

/**
 * binary_tree_nodes - count node with at,
 * least 1 child in a binary tree
 * @tree: pointer to binary tree
 * Return: number of nodes with at least 1 child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (count += 1);
	else
		return (count);
}

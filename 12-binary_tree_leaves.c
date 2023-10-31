#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to tree to get number of leaves
 * Return: number of leaves in binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += binary_tree_leaves(tree->left);
	size += binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (size += 1);
	else
		return (size);
}

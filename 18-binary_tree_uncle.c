#include "binary_trees.h"

/**
 * binary_tree_parent - find parent of binary tree.
 * @node: pointer to binary tree
 * Return: pointer to parent else null;
 */

binary_tree_t *binary_tree_parent(binary_tree_t *node)
{
	return (node->parent);
}

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: pointer to binary tree
 * Return: pointer to uncle else null;.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *grand_parent = NULL;


	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = binary_tree_parent(node);
	grand_parent = binary_tree_parent(parent);

	if (grand_parent->left == parent)
		return (grand_parent->right);

	return (grand_parent->left);
}

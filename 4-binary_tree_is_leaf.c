#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/* check if node has parent or has children */
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

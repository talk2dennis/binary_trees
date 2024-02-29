#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that count  the nodes with at
 *			least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to count the leaves.
 * Return: 0 if tree is null otherwise number of leaves
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size += (tree->left || tree->right) ? 1 : 0;
		size += binary_tree_nodes(tree->left);
		size += binary_tree_nodes(tree->right);
	}
	return (size);
}

#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that count the leaves of a binary tree node
 * @tree: is a pointer to the root node of the tree to count the leaves.
 * Return: 0 if tree is null otherwise number of leaves
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r_size, l_size;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	return (1);
	l_size = binary_tree_leaves(tree->left);
	r_size = binary_tree_leaves(tree->right);
	return (l_size + r_size);
}

#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to determine the size.
 * Return: 0 if tree is null otherwise size of the tree
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r_size, l_size;

	if (tree != NULL)
	{
		l_size = binary_tree_size(tree->left);
		r_size = binary_tree_size(tree->right);
		return ((l_size + r_size) + 1);
	}
	return (0);
}

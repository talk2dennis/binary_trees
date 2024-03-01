#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to a node
 * Return: 1 if node is full otherwise 0
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	int r_size, l_size;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	r_size = binary_tree_is_full(tree->right);
	l_size = binary_tree_is_full(tree->left);
	return (r_size && l_size);
}

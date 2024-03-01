#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to a node
 * Return: 1 if node is perfect otherwise 0
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int r_height = 0, l_height = 0;

	if (tree == NULL)
		return (0);
	r_height = binary_tree_height(tree->right);
	l_height = binary_tree_height(tree->left);
	return (r_height == l_height);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is null otherwise hight of the tree
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height, l_height;

	if (tree != NULL)
	{
		l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l_height > r_height) ? l_height : r_height);
	}
	return (0);
}

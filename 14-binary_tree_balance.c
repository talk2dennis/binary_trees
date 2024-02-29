#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
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
		l_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l_height > r_height) ? l_height : r_height);
	}
	return (0);
}

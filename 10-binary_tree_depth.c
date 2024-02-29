#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the depth.
 * Return: 0 if tree is null otherwise depth of the tree
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree != NULL)
	{
		return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
	}
	return (0);
}

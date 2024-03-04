#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs a left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */


binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp, *node;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	node = tree->right;
	tmp = node->left;
	node->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = node;
	node->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = node;
		else
			tmp->right = node;
	}
	return (node);

}

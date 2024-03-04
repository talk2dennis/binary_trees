#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function that performs a
 *				right-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */


binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp, *node;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	node = tree->left;
	tmp = node->right;
	node->right = tree;
	tree->left = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = node;
	node->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->right == tree)
			tmp->right = node;
		else
			tmp->left = node;
	}
	return (node);

}

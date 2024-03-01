#include "binary_trees.h"



int is_perfect(const binary_tree_t *tree, size_t height, size_t level);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to a node
 * Return: 1 if node is perfect otherwise 0
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);

	return (is_perfect(tree, height, 0));
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


/**
 * is_perfect - A helper function to check the child of a tree
 * @tree: pointer to the node
 * @height: the height of the node
 * @level: the level or depth
 * Return: 1 if equal otherwise 0
 */


int is_perfect(const binary_tree_t *tree, size_t height, size_t level)
{
	/** An empty tree is perfect */
	if (tree == NULL)
		return (1);

	/** If a leaf node is reached, check if its level is equal to the height */
	if (tree->left == NULL && tree->right == NULL)
		return (level == height);

	/** Recursively check left and right subtrees */
	return (is_perfect(tree->left, height, level + 1) &&
		is_perfect(tree->right, height, level + 1));
}

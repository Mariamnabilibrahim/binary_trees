#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree:  is a pointer to the root node
 * of the tree to measure the size
 * Return: size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0, x = 0, y = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		x = binary_tree_size(tree->left);
		y = binary_tree_size(tree->right);
		s = x + y + 1;
	}
	return (s);
}

#include "binary_trees.h"

/**
 * tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
*/

int tree_is_perfect(const binary_tree_t *tree)
{
	int x = 0, y = 0;

	if (tree->left && tree->right)
	{
		x = 1 + tree_is_perfect(tree->left);
		y = 1 + tree_is_perfect(tree->right);
		if (y == x && y != 0 && x != 0)
			return (y);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect -function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 is it is or 0 if not
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		res = tree_is_perfect(tree);
		if (res != 0)
		{
			return (1);
		}
		return (0);
	}
}

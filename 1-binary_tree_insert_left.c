#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: is a pointer to the node to insert the left-child
 * @value: is the value to store in the new node
 * Return: NULL if it fails or the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_n = binary_tree_node(parent, value);
	if (new_n == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_n->left = parent->left;
		parent->left->parent = new_n;
	}
	parent->left = new_n;
	return (new_n);
}

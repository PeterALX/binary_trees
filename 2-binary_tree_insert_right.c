#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: the parent to be inserted into
 * @value: the value of the new node
 * Return: pointer to the inserted node, NULL if fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);


	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	new_node->right = parent->right;
	new_node->left = NULL;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;

	return (new_node);
}

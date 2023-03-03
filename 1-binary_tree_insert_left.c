#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: the parent to be inserted into
 * @value: the value of the new node
 * Return: pointer to the inserted node, NULL if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);


	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	new_node->left = parent->left;
	new_node->right = NULL;
	parent->left = new_node;
	if (new_node->left)
		new_node->left->parent = new_node;

	return (new_node);
}

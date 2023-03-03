#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf or not 
 * @node: the node to be checked
 * Return: 1 if is node, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}

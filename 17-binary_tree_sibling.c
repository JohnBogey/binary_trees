#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: binary tree node
 *
 * Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != node)
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
		else
			return (NULL);
	}
	else if (node->parent->right != node)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
		else
			return (NULL);
	}
	else
		return (NULL);
}

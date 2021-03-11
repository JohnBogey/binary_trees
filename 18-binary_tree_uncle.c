#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: binary tree node
 *
 * Return: uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}

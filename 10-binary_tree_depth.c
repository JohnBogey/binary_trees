#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_depth -  finds the depth of node in binary tree
* @tree: node being checked
* Return: size_t depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}


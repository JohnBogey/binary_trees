#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: binary tree
 *
 * Return: nothing
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

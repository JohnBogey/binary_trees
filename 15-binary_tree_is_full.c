#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: binary tree
 *
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) & binary_tree_is_full(tree->right));
}

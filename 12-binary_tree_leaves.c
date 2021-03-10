#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
* binary_tree_leaves -  counts number of leaf nodes on binary tree
* @tree: tree node
* Return: number of leaf nodes on tre
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree) == 1)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


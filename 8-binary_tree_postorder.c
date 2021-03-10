#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
* binary_tree_postorder - post order traversal binary tree
* @tree: root of binary tree
* @func: print data in node
* Return: void
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

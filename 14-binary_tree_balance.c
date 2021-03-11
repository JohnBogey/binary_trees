#include <stdio.h>
#include "binary_trees.h"
int height(const binary_tree_t *tree);

/**
* binary_tree_balance - determines if a bianry tree is balanced
* @tree: node fo a binary tree
* Return: 1 if balanced else 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}

/**
 * height - finds the height of the binary tree
 * @tree: root of binary tree
 * Return: height
 */

int height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	left = height(tree->left);
	right = height(tree->right);
	if (left > right)
		return (1 + left);
	return (1 + right);
}

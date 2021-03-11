#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_is_perfect - returns if a bianry tree is perfect
* @tree: node to be checked
* Return: 1 if perfect else 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l, r;

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if ((l == r) && (binary_tree_is_full(tree) == 1))
		return (1);
	return (0);
}

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: binary tree
 * Return: nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

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


#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: tree to measure the balance factor
 * Description:
 *The balance factor of a binary tree is the difference in
 *heights of its two subtrees(hR - hL).
 *The balance factor(bf) of a height balanced binary tree may take on one
 *of the values -1, 0, +1. An AVL node is
 *"leftheavy" when bf = 1,
 *"equalheight" when bf = 0, and
 *"rightheavy" when bf = +1
 *
 * Return: tree balance factor(bf)(int) else 0 when tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hR, hL, bf;

	if (!tree)
		return (0);

	hR = tree->left ? (int) binary_tree_height(tree->left) : -1;
	hL = tree->right ? (int) binary_tree_height(tree->right) : -1;

	bf = hR - hL;

	return (bf);
}

/**
 * binary_tree_height- Traverses left,right,root
 * subtrees returns the max height
 * @tree: tree root node to be traversed
 * Return: Integer value representing height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_height = 0;
	right_height = 0;


	/* node should not be NULL */
	if (!tree)
	{
		return (0);
	}
	else
	{
		/* traverse left */
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		/* traverse right */
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		if (left_height >= right_height)
			return (left_height);
		else
			return (right_height);
	}
}

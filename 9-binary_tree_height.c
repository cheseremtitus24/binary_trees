#include "binary_trees.h"
/**
 * binary_tree_height- Traverses left,right,root subtrees returns the max height
 * @tree: tree root node to be traversed
 * Return: Integer value representing height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_height = 0;
	right_height = 0;


	/* node should not be NULL*/
	if (!tree)
	{
		return (0);
	}
	else
	{
		/* traverse left*/
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		/* traverse right*/
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		if (left_height >= right_height)
			return (left_height);
		else
			return (right_height);
	}
}


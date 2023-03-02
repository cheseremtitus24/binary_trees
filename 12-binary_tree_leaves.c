#include "binary_trees.h"
/**
 * binary_tree_leaves- Traverses left and right subtrees and count leaves
 * @tree: tree root node to be traversed
 * Return: Integer value representing tree leaves number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	/* node should not be NULL*/
	if (!tree)
	{
		return (0);
	}
	else
	{
		/* A leaf is a node with no children*/
		if (!tree->left || !tree->right)
			return (1);
		else
			return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}


#include "binary_trees.h"
/**
 * binary_tree_size- Traverses left and right subtrees an measures size of tree
 * @tree: tree root node to be traversed
 * Return: Integer value representing tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	/* node should not be NULL*/
	if (!tree)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	}
}


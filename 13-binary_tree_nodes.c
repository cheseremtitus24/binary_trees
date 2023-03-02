#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: tree to count the nodes from
 *
 * Return: number of matched nodes else 0 when tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size- Traverses left and right subtrees an measures size of tree
 * @tree: tree root node to be traversed
 * Return: Integer value representing tree size else 0 when tree is NULL
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

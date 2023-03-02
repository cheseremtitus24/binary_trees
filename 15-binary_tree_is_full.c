#include "binary_trees.h"

/**
 * binary_tree_is_full- verifies whether a bin tree is a full bin tree
 * @tree: tree to verify
 * Description: Full Binary Tree
 * Is a tree which every node has either Zero or Two Children
 * Return: Integer 1 if true else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Binary tree with no children*/
	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}


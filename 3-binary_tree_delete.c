#include "binary_trees.h"
/**
 * binary_tree_delete- Deletes all nodes of a binary tree
 * @tree: Pointer to root node to delete from
 * Return: Void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* Tree should not be NULL*/
	if (tree)
	{
		/* Recursively deletes all nodes*/
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}


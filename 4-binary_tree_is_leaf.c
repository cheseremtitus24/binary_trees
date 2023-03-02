#include "binary_trees.h"
/**
 * binary_tree_is_leaf- Checks if a node is a leaf
 * @node: Pointer to node to be checked
 * Return: 1 if is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* node should not be NULL*/
	if (node)
	{
		/* node is a leaf it has no children*/
		if (node->right || node->left)
			return (0);
		else
			return (1);
	}
	/* Returns 0 when node is null*/
	return (0);
}


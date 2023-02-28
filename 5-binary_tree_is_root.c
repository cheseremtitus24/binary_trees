#include "binary_trees.h"
/**
 * binary_tree_is_root- Checks if a node has no parents 
 * @node: Pointer to node to be checked
 * Return: 1 if is a root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* node should not be NULL*/
	if (node)
	{
		/* node is the root if it has no parent nodes*/
		if(node->parent)
			return (0);
		else
			return (1);
	}
	/* Returns 0 when node is null*/
	return (0);
}


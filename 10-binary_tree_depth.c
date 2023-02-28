#include "binary_trees.h"
/**
 * binary_tree_depth- Traverses upwards toward the root computes node depth
 * @tree: tree root node to be traversed
 * Return: Integer value representing node depth from root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;

	/* node should not be NULL*/
	if (!tree)
	{
		return (0);
	}
	else
	{
		while (tree)
		{
			node_depth++;
			tree = tree->parent;

		}
		return (node_depth);
	}
}


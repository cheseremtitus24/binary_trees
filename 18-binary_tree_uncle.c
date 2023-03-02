#include "binary_trees.h"

/**
 * binary_tree_uncle- Finds parent level Pair @ same parent depth 
 * @node: node to find parent level Pair
 *
 * Return: node_pair pointer if exists else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	/* If current node is the root node then it has no siblings*/

	if (!node->parent)
		return (NULL);

        return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling- Finds Other Pair @ same depth
 * @node: node to find level Pair
 *
 * Return: node_pair pointer if exists else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	/* If current node is the root node then it has no siblings*/

	if (!node->parent)
		return (NULL);
	/* if current node is left return the right sibling*/
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}

	return (node->parent->left);
}




#include "binary_trees.h"
/**
 * binary_tree_postorder- Traverses left,right,root subtrees,node
 * @tree: tree root node to be traversed
 * @func: Pointer to a function
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* node should not be NULL*/
	if (!tree || !func)
	{
		return;
	}
	/* traverse left*/
	binary_tree_postorder(tree->left,func);
	/* traverse right*/
	binary_tree_postorder(tree->right,func);
	/* traverse root*/
	func(tree->n);
}


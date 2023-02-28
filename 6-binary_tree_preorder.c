#include "binary_trees.h"
/**
 * binary_tree_preorder- Traverses root,left,right subtrees
 * @tree: tree root node to be traversed
 * @func: Pointer to a function
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* node should not be NULL*/
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left,func);
	binary_tree_preorder(tree->right,func);
}


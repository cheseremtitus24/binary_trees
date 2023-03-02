#include "binary_trees.h"
/**
 * binary_tree_inorder- Traverses left,root,right subtrees
 * @tree: tree root node to be traversed
 * @func: Pointer to a function
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* node should not be NULL*/
	if (!tree || !func)
	{
		return;
	}
	/* traverse left*/
	binary_tree_inorder(tree->left, func);
	/* traverse root*/
	func(tree->n);
	/* traverse right*/
	binary_tree_inorder(tree->right, func);
}


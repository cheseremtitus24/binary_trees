#include "binary_trees.h"

/**
 * binary_tree_is_perfect- verifies whether a bin tree is a perfect bin tree
 * @tree: tree to verify
 *
 * Description: Perfect Binary Tree
 *
 * Is a tree in which all interior nodes
 * have 2 children and all leaves have the same depth
 *
 * Return: Integer 1 if true else 0 when tree is NULL or node has only 1 child
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_depth;
	int tree_size;
	int total_possible_nodes;

	if (!tree)
		return (0);

	/* A binary tree with only a root node is perfect*/
	if (tree && !tree->right && !tree->left)
		return (1);



	/**
	 * Formula: 2^(depth + 1) - 1 = Total Possible Nodes
	 * if (tree_size == (Total Possible Nodes)
	 * then
	 * Is a Perfect Binary Tree
	 */
	tree_depth = binary_tree_height(tree);
	/*printf("Tree depth is %d\n", tree_depth);*/
	tree_size = binary_tree_size(tree);
	/*printf("Tree size is %d\n", tree_size);*/
	total_possible_nodes = _pow_recursion(2, (int) (tree_depth + 1)) - 1;
	/*printf("Tree all possible nodes is %d\n", total_possible_nodes);*/
	if (tree_size == total_possible_nodes)
		return (1);
	return (0);
}
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: the value to exponentiate
 *@y: the power to raise x to
 *Return: x to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}



/**
 * binary_tree_height- Traverses left,right,root subtrees
 * returns the max height
 * @tree: tree root node to be traversed
 * Return: Integer value representing height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_height = 0;
	right_height = 0;


	/* node should not be NULL*/
	if (!tree)
	{
		return (0);
	}
	else
	{
		/* traverse left*/
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		/* traverse right*/
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		if (left_height >= right_height)
			return (left_height);
		else
			return (right_height);
	}
}

/**
 * binary_tree_size- Traverses left and right subtrees an measures size of tree
 * @tree: tree root node to be traversed
 * Return: Integer value representing tree size
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



#include "binary_trees.h"
/**
 * binary_tree_insert_right -Function inserts a node as the right-child of another
 * @parent: is a pointer to the parent node to insert the right-child in
 * @value: is the value to store in the newly created node
 * description- when parent already has a right-child it should be replaced.
 * and the replaced values made the right child of inserted node
 *
 * Return: NULL on Failure or parent(NULL) else a pointer
 * to variable-allocated memory space
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*Allocate memory for new node*/
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	/* verify memory allocation was successful*/
	/* Also check that parent is not NULL*/
	if (newNode && parent)
	{
		/* set value to the created node*/
		newNode->n = value;
		newNode->parent = parent;
		/*left child should be set to NULL*/
		newNode->left = NULL;

		newNode->right = parent->right;
		parent->right = newNode;

		/* if parent has a right node */
		if (newNode->right)
			newNode->right->parent = newNode;

		return (newNode);
	}
	/* Return NULL on Failure*/
	return (NULL);
}

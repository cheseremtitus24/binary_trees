#include "binary_trees.h"
/**
 * binary_tree_insert_left -Function inserts a node as the left-child of another
 * @parent: is a pointer to the parent node to insert the left-child in
 * @value: is the value to store in the newly created node
 * description- when parent already has a left-child it should be replaced.
 * and the replaced values made the left child of inserted node
 *
 * Return: NULL on Failure or parent(NULL) else a pointer
 * to variable-allocated memory space
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
		/*right child should be set to NULL*/
		newNode->right = NULL;

		newNode->left = parent->left;
		parent->left = newNode;

		/* if parent has a left node */
		if (newNode->left)
			newNode->left->parent = newNode;

		return (newNode);
	}
	/* Return NULL on Failure*/
	return (NULL);
}

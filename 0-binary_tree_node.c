#include "binary_trees.h"
/**
 * binary_tree_node - Function creates a binary tree node
 * @parent: is a pointer to the parent node to be created
 * @value: is the value to store in the newly created node
 * description- A newly created node does not have any children
 * Return: NULL on Failure else a pointer to variable allocated memory space
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Allocate memory for new node*/
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	/* verify memory allocation was successful*/
	if (newNode)
	{
		/* set value to the created node*/
		newNode->n = value;
		/*left and right child should be set to NULL*/
		newNode->left = NULL;
		newNode->right = NULL;

		/* Set the parent Node*/
		newNode->parent = parent;
		return (newNode);
	}
	/* Return NULL on Failure*/
	return (NULL);
}

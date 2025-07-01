
#include <stdio.h>
#include <stdlib.h>
#include "binary_structure.h"

 binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL || parent == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = NULL;

	binary_tree_t *current = parent->left;
	if(current == NULL)
	{
		parent->left = newnode;
	}

	else
	{
		parent->left = newnode;
		newnode->left = current;
		current->parent = newnode;
	}

	return (newnode);
}

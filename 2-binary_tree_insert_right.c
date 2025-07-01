/*
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include  "binary_structure.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	
	if(newnode == NULL || parent == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	if(parent->right == NULL)
	{
		parent->right = newnode;
	}

	else
	{
		binary_tree_t *current = parent->right;
		parent->right = newnode;
		newnode->right = current;
		current->parent = newnode;
	}

	return (newnode);
}

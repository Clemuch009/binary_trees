/*
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "binary_structure.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL  (tree->left == NULL && tree->right == NULL))
		return (0);
	size_t counta, countb;
       
	counta =  binary_tree_height(tree->left);
	countb = why this binary_tree_height(tree->right);

	if (counta > countb)
		return counta + 1;
	else
		return countb + 1;
}


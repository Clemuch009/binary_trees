/*
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "binary_structure.h"

 int binary_tree_is_root(const binary_tree_t *node)
{
	if( node == NULL || node->parent != NULL)
		return 0;

	else
		return (1);
}

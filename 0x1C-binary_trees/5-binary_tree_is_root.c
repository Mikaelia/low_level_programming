#include "binary_trees.h"
/**
  * binary_tree_is_root - checks if node is the root
  * @node: pointer to the node to check
  * Return: 1 if node is root, otherwise 0
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	else
		return (1);
}

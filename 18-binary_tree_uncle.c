#include "binary_tree.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* if node is NULL or node has no uncle, return NULL */
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);
	/* return pointer to unclde node */
	return (node->parent->parent);
}

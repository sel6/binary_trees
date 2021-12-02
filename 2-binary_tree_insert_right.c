#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as a right-child of
 * of another node in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 * Return: If parent is NULL or an error occurs - NULL.
 * else - a pointer to the new node.
 * Description: If parent already has a right-child, the new node
 * takes its place and the old right-child is set as
 * the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));

if (parent == NULL)
return (NULL);

if (node == NULL)
return (NULL);

node->n = value;
node->parent = parent;
if (parent->right != NULL)
{
binary_tree_t *old = malloc(sizeof(binary_tree_t));
node->right = old;
old->parent = node;
}
parent->right = node;

	return (node);
}

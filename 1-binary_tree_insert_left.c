#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 * of another node in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: If parent is NULL or an error occurs - NULL.
 * else - a pointer to the new node.
 * Description: If parent already has a left-child, the new node
 * takes its place and the old left-child is set as
 * the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));

if (parent == NULL)
return (NULL);

if (node == NULL)
return (NULL);

node->n = value;
node->parent = parent;
if (parent->left != NULL)
{
binary_tree_t *old = malloc(sizeof(binary_tree_t));
node->left = old;
old->parent = node;
}
parent->left = node;

	return (node);
}

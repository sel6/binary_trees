#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 * Return: Otherwise - a pointer to the new node.
 */
 
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
 
    binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
 if (newnode == NULL)
  return NULL;
    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;
    return (newnode);
}

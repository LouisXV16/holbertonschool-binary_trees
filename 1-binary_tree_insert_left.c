#include "binary_trees.h"

/**
* binary_tree_insert_left - insert a node as a left child
* @parent: The parent node
* @value: Value of the node
* Return: pointer to the node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Création du nouveau nœud */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL); /* Échec de l'allocation mémoire */
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Insertion du nouveau nœud comme enfant gauche du parent */
	if (parent == NULL)
	{
		return (NULL); /* Pas de parent, donc l'insertion est impossible */
	}
	if (parent->left == NULL)
	{
		/* Si le parent n'a pas encore d'enfant gauche, on l'ajoute directement */
		parent->left = new_node;
	}
	else
	{
		/**
		* Si le parent a déjà un enfant gauche,
		* on ajuste les pointeurs pour insérer le nouveau nœud
		*/
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}

	return (new_node); /* Retourne le pointeur vers le nouveau nœud inséré */
}

#include "hash_tables.h"

/**
 * hash_table_create - Create the  hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hts;
	unsigned long int i;

	hts = malloc(sizeof(hash_table_t));
	if (hts == NULL)
		return (NULL);

	hts->size = size;
	hts->array = malloc(sizeof(hash_node_t *) * size);
	if (hts->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hts->array[i] = NULL;

	return (hts);
}

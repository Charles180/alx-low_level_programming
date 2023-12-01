#include "hash_tables.h"
#include <string.h>
/**
  *hash_table_get - Retrieves a value from the hash table
  *
  *@ht: the hash table
  *
  *@key: key associated with the value
  *
  *Return: key if found, NULLL if not
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int w;

	if (ht == NULL || key == NULL)
		return (NULL);
	w = key_index((const unsigned char *)key, ht->size);
	node = ht->array[w];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

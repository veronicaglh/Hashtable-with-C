/*This program will implement the hash table data structure. Using C language*/

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 20000

typedef struct entry_t {
    char *key;
    char *value;
    struct entry_t *next;
} entry_t;

typedef struct {
    entry_t **entries;
} ht_t;

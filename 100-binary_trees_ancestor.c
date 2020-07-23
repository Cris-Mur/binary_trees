#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - function that finds the lowest
 * common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
        size_t i, j, n1, n2;
        binary_tree_t **l_P1 = NULL, **l_P2 = NULL;
        if (!first || !second)
                return (NULL);

        printf("FIRST\n[%d]\n", first->n);
        l_P1 = l_parents((binary_tree_t *)first);
        printf("&l_P1: %p\n", (void *)l_P1);
        printf("SECOND\n[%d]\n", second->n);
        l_P2 = l_parents((binary_tree_t *)second);
        printf("&l_P2: %p\n", (void *)l_P2);

        n1 = binary_tree_depth(first) + 1;
        printf("%lu\n", n1);
        n2 = binary_tree_depth(second) + 1;
        printf("%lu\n", n2);
        for (i = 0; i < n1; i++)
                for (j = 0; j < n2; j++)
		{
                        printf("%d == %d ?\n", l_P1[i]->n, l_P2[j]->n);
			if (l_P1[i] == l_P2[j])
                                return (l_P1[i]);
		}
        return (NULL);
}

binary_tree_t **l_parents(binary_tree_t *node)
{
        binary_tree_t **l_P = NULL;
        int N = 0, i;

        N = binary_tree_depth(node) + 1;

        l_P = malloc(N * sizeof(binary_tree_t *));
        if (!l_P)
                return (NULL);

        l_P[0] = node;
        for (i = 1; i < N && node->parent; i++)
        {
                l_P[i]= node->parent;
                node = node->parent;
        }
        for (i = 0; i < N; i++)
                printf("l_P[%d]: %d\n", i, l_P[i]->n);
        return (l_P);
}

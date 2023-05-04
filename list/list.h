#ifndef LIST_H
#define LIST_H

#include<stdlib.h>
#include<stdio.h>

typedef struct List_t
{
	int data;
	struct List_t *next;
}List, Cell;

List	*emptyList(void);
int		isEnptyList(List *);
long	lenList(List *);
List	*addAt(List *, int, int);
int		getAt(List *, int);
void	setAt(List *, int, int);
List	*freeAt(List *, int);
List	*freeList(List *);
void	printlist(List *);
static	Cell *createCell(int data)

#endif
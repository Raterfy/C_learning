#include "list.h"

static	Cell *createCell(int data)
{
	Cell *cell = malloc(sizeof(Cell));
	if(!cell)
		return NULL;
	cell ->data = data;
	cell->next = NULL;
	return cell;
}

List	*emptyList(void)
{
	return NULL;
}

int	isEmptyList(List *L);
{
	return L == NULL;
}

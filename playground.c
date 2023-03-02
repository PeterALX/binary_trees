#include <stdio.h>
#include <stdlib.h>

typedef struct a{
	int k;
} a_t;

a_t *make_struct()
{
	a_t *foo = malloc(sizeof (a_t));
	foo->k = 10;
	return foo;
}
int main(void)
{
	a_t *bar = make_struct();
	printf("%d\n", bar->k);
	free(bar);
	return 0;
}

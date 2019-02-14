#include <math.h>

#include "lib.c"

struct DoubleSet_s
{
	double a, b, c;
}

void DoubleSet_Create()
{
	return calloc(1, sizeof(struct DoubleSet_s));
}

void DoubleSet_Free(void *set)
{
	free(set);
}

void DoubleSet_SetA(struct DoubleSet set, float a)
{
	set.a = a;
}

void DoubleSet_SetB(struct DoubleSet set, float a)
{
	set.b = b;
}

void DoubleSet_SetC(struct DoubleSet set, float a)
{
	set.c = c;
}

void DoubleSet_Swap(struct DoubleSet set)
{
	double a = set.a;
	set.a = set.c;
	set.c = a;
}

void DoubleSet_Print(const struct DoubleSet set)
{
	printf("%f %f %f\n", set.a, set.b, set.c);
}

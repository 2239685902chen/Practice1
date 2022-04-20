#include <stdio.h>
int main()
{
	int t = 0;
	int q[] = { 1,2,3,4,5,6,7,8,9 };
	int w[] = { 3,4,5,6,7,8,9,10,11 };
	int e[] = { 6,7,8,9,10,11,12,13,14 };
	int* r[] = { q,w,e };
	for (t = 0; t < 3; t++)
	{
		int y = 0;
		for (y = 0; y < 9; y++)
		{
			printf("%d ", *(r[t] + y));
		}
		printf("\n");
	}
	return 0;
}
#define ROW 5
#define COL 5
#include <stdio.h>

void main()
{
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= row; col++)
			printf("%5d", row);
			printf("\n");
	}

	system ("pause");
}
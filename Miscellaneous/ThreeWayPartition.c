#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define X_countof(A) sizeof(A)/sizeof(A[0])

void swap(char *a, char *b)
{
	char ch = *a;
	*a = *b;
	*b = ch;
}

void three_way_partition(char A[], int size)
{
	int i, x, y;
	x = -1;
	y = size;
	i = 0;
	while (i < y)
	{
		if (A[i] == 'R')
		{
			x++;
			swap(&A[x], &A[i]);
		}
		else if (A[i] == 'B')
		{
			i++;
		}
		else
		{
			y--;
			swap(&A[i], &A[y]);
		}

		if (x == i)
			i++;
	}
}

int main()
{
	char B[20];
	strcpy(B, "RRRGGGRRR");
	three_way_partition(B, strlen(B));
	printf("%s", B);
	return 0;
}

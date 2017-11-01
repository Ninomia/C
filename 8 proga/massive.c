#include  <stdio.h>
int main()
{
	int x, y;
	
	printf("Vvedite razmer massiva\n\tx=");
	scanf ("%d", &x);
	printf("\ty=");
	scanf ("%d", &y);
	printf("\n\tx=%d", x);
	printf("\n\ty=%d\n", y);
	int massiv [x][y];
	printf("Vvedte massiv\n");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("[%d][%d] =", i, j);
			scanf ("%d", &massiv[i][j]);	
		}
	}
	for (int i = 0; i < x; i++)
	{
		
		for (int j = 0; j < y; j++)
		{
			printf("%d\t", massiv[i][j]);	
		}
	printf("\n");
	}


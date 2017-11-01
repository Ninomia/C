#include <stdio.h>

int main()
{
	char array[7] = {'S','t','r','i','n','g','\0'};
	char string[] = {"Stroka"};
	int number [4]; // = {10, 50, 100, 250};
	number [0] = 10;
	number [1] = 50;
	number [2] = 100;
	number [3] = 250;
	for (int i=0; i<7; i++)
	{
		printf("%c", string[i]);
	}
	printf("\n");
	for (int j=0; j<7; j++)
	{
		printf("%c",array[j]); 
	}
	printf("\n");

}
#include <stdio.h>
int main()
{
	short age, weight;
	char* name[50];
	printf("Please enter your nam:");
	scanf ("%s", name);
	printf("Enter your age:");
	scanf ("%d", &age);
	printf("Enter your weight:");
	scanf ("%d", &weight);
	printf("#############Info#############\n");
	printf ("Your nam %s, your age %d years, your weight %d kg\n", &name, age, weight);
	printf("Addres perem name s nashim imenem v pamyati PC - %p\n", &name);
}
#include <stdio.h>

int main()
{

	fprintf(stdout, "Enter film and listen they description\n");
	fprintf(stdout, "1. Terminator\n");
	fprintf(stdout, "2. Star Wars : Rogue one\n");
	fprintf(stdout, "3. Undisputed 4\n");
	fprintf(stdout, "4. Doctor Strange\n");
	int number = 0;
	fscanf(stdin, "%d", &number);
	switch(number)
	{
		case 1: fprintf(stdout, "When John Connor, leader of the human resistance, sends Sgt. Kyle Reese back to 1984 to protect Sarah Connor and safeguard the future, an unexpected turn of events creates a fractured timeline.\n");
		break;
		case 2: fprintf(stdout, "The daughter of an Imperial scientist joins the Rebel Alliance in a risky move to steal the plans for the Death Star.\n");
		break;
		case 3: fprintf(stdout, "In the fourth installment of the fighting franchise, Boyka is shooting for the big leagues when an accidental death in the ring makes him question everything he stands for.\n");
		break;
		case 4: fprintf(stdout, "While on a journey of physical and spiritual healing, a brilliant neurosurgeon is drawn into the world of the mystic arts.\n");
		break;
		default: fprintf(stdout, "Bad choise\n");
	}
	fprintf(stdout, "Thanks for waching\n");
}

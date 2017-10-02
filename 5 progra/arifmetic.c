#include <stdio.h>
int main()
{
	/*int a = 10, b = 20, c = 3, d = 2, e = 4;
	int itog = 0, itog2 = 0;
	itog = a + b - c * d / e;
	printf("%d\n", itog);
	itog2 = ( a + b ) - ( ( c * d ) / e );
	printf("itog2 = %d\n", itog2);
	
	printf("Slozenie %d\n", a + b);
	printf("Vychitanie %d\n", b - a);
	printf("Umnozenie %d\n", d * e);
	printf("Delenie %d\n", b / d );
	printf("Ost ot del %d\n", a % d );
	printf("Increment %d\n", ++e);
	printf("Postfix Increment a = %d\t  %d\n", a++, a);
	printf("Decrement %d\n", --d);
	printf("Postfix Decrement %d\t %d\n", e--, e ); */

	int k = 0, m = 20, n = 40 , r = 25;
	m++ ; // 21
	int nr1 = (--n) - r;
	k = m - nr1;
	printf("%d\n%d\n%d\n", m, nr1, k);

	
}
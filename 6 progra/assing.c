#include <stdio.h>
int main(void)
{
	int a = 10, b = 20;
	printf("a = %d, b = %d\n", a, b);
	printf("Slozenie a+=b (10+20) a = %d\n", a+=b);//a=30
	printf("Vychitanie a-=b (30-20) a = %d\n", a-=b);//a=10
	printf("Umnozenie b*=a (20*10) b = %d\n", b*=a);//b=200
	printf("Delenie b/a (200/10) b = %d\n", b/=a);//b=20
	printf("Ostatok ot deleniya a%%=b (10%%20) a = %d\n", a%=b);
 
}
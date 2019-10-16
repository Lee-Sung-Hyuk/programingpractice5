#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a, b, c;

	printf("¼·¾¾¿Âµµ¸¦ ÀÔ·Â =");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("È­¾¾¿Âµµ = %.4lf\n", (9.0 / 5.0) * a + 32.0);
	printf("È­¾¾¿Âµµ = %.4lf\n", (9.0 / 5.0) * b + 32.0);
	printf("È­¾¾¿Âµµ = %.4lf\n", (9.0 / 5.0) * c + 32.0);

	return 0;
}
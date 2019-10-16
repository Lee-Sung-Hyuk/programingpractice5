#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float a, b, c;

	printf("¼·¾¾¿Âµµ¸¦ ÀÔ·Â =");
	scanf("%f %f %f", &a, &b, &c);
	printf("È­¾¾¿Âµµ = %.4f\n", (9.0 / 5.0) * a + 32.0);
	printf("È­¾¾¿Âµµ = %.4f\n", (9.0 / 5.0) * b + 32.0);
	printf("È­¾¾¿Âµµ = %.4f\n", (9.0 / 5.0) * c + 32.0);

	return 0;
}
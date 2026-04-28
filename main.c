#include <stdio.h>

int main()
{
	float a;
	int b;

	scanf("%f", &a);
	scanf("%d", &b);
	printf("%.*f", b, a);
	return 0;
}

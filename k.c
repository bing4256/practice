#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main()
{
	int A=0, B=0, C=0;
	scanf("%d &d &d", &A, &B, &C);
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d", ((A % C) * (B % C)) % C);
	return 0;
}

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else
		printf("==");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	int x1, x2, y1, y2;
	float n;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	n = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	printf("%f", n);
}
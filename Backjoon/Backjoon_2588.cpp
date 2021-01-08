#include <stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d %d", &a, &b);
	c=b;
	printf("%d\n", a*(b%10));
	b/=10;
	printf("%d\n", a*(b%10));
	b/=10;
	printf("%d\n", a*(b%10));
	b/=10;
	printf("%d", a*c);

    return 0;
}
#include <stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>=b) {
		if(b>=c) {
			printf("%d", b);
		} else if(a<=c) {
			printf("%d", a);
		} else {
			printf("%d", c);
		}
	} else if(a>=c) {
		printf("%d", a);
	} else if(b>=c) {
		printf("%d", c);
	} else {
		printf("%d", b);
	}
	
	return 0;
}
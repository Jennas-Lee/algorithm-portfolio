#include <iostream>

int main() {
	int n, s=0, i;
	
	for(i=0; i<6; i++) {
		scanf("%d", &n);
		s+=n;
	}
	printf("%d", s*5);
	
	return 0;
}

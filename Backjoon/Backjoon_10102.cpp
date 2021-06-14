#include <iostream>

int main() {
	int n, a=0, b=0, i;
	char c;
	
	scanf("%d ", &n);
	for(i=0; i<n; i++) {
		scanf("%c", &c);
		if(c=='A') {
			a++;
		} else {
			b++;
		}
	}
	if(a>b) {
		printf("A");
	} else if(a==b) {
		printf("Tie");
	} else {
		printf("B");
	}
	
	return 0;
}

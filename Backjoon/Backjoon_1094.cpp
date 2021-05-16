#include <iostream>

int main() {
	int x, c=0;
	
	scanf("%d", &x);
	while(x>0) {
		if(x%2==1) {
			c++;
		}
		x/=2;
	}
	printf("%d", c);
	
	return 0;
}

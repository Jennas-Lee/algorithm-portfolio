#include <iostream>

int main() {
	long long int s, i=1;
	
	scanf("%lld", &s);
	while(1) {
		long long int t=(i*(i+1))/2;
		if(t>s) {
			printf("%lld", i-1);
			return 0;
		}
		i++;
	}
	
	return 0;
}

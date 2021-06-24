#include <iostream>
#include <queue>

using namespace std;

int gcd(int a, int b) {
	while(b!=0) {
		int r=a%b;
		a=b;
		b=r;
	}
	
	return a;
}

int lcm(int a, int b) {
	return a*b/gcd(a, b);
}

int main() {
	int t, a, b, i;
	
	scanf("%d", &t);
	for(i=0; i<t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d %d\n", lcm(a, b), gcd(a, b));
	}
	
	return 0;
}

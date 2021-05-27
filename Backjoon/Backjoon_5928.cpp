#include <iostream>

int main() {
	int d, h, m, r;
	
	scanf("%d %d %d", &d, &h, &m);
	r=(d-11)*1440+(h-11)*60+(m-11);
	printf("%d", r >= 0 ? r : -1);
	
	return 0;
}

#include <stdio.h>

int main() {
	int n, m;
	
	scanf("%d %d", &n, &m);
	m-=45;
	if(m<0) {
		n-=1;
		m+=60;
	}
	if(n<0) n=23;
	printf("%d %d", n, m);

    return 0;
}
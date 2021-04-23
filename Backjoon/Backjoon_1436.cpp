#include <iostream>
#include <cstring>

int main() {
	int n, r=0, m=100, i;
	char t[7];
	
	scanf("%d", &n);
	while(n>r) {
		m++;
		sprintf(t, "%d", m);
		for(i=0; i<=strlen(t)-3; i++) {
			if(t[i]=='6' && t[i+1]=='6' && t[i+2]=='6') {
				r++;
				break;
			}
		}
	}
	printf("%d", m);
	
	return 0;
}

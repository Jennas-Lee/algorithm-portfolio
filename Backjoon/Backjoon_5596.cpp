#include <iostream>

int main() {
	int s1=0, s2=0, t, i;
	
	for(i=0; i<4; i++) {
		scanf("%d", &t);
		s1+=t;
	}
	for(i=0; i<4; i++) {
		scanf("%d", &t);
		s2+=t;
	}
	printf("%d", s1 >= s2 ? s1 : s2);
	
	return 0;
}

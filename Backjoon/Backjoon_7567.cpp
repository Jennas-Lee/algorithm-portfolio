#include <iostream>

int main() {
	int s=10, i;
	char a[51];
	
	scanf("%s", a);
	for(i=1; a[i]!='\0'; i++) {
		if(a[i]!=a[i-1]) {
			s+=10;
		} else {
			s+=5;
		}
	}
	printf("%d", s);
	
	return 0;
}

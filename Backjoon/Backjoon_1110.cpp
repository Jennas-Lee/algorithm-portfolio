#include <stdio.h>

int main() {
	int n, a=0, b=0, r, t=0, s=0;
	
	scanf("%d", &n);
	if(n==0) {
		printf("1");
		return 0;
	}
	r=n;
	while(1) {
		if(t==n) {
			printf("%d", s);
			break;
		} else {
			if(r<10) {
				a=0;
			} else {
				a=r/10;
			}
			b=r%10;
			r=((10*b)+((a+b)%10));
			s++;
			t=r;
		}
	}	
	
	return 0;
}
#include <iostream>

int main() {
	long long int l, r, i, j, s=0;
	char a[51];
	
	scanf("%lld", &l);
	scanf("%s", a);
	for(i=0; i<l; i++) {
		r=1;
		for(j=0; j<i; j++) {
			r=(r*31)%1234567891;
		}
		s=(s+((a[i]-96)*r))%1234567891;
	}
	printf("%lld", s);
	
	return 0;
}

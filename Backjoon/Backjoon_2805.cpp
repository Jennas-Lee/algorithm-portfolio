#include <iostream>

int main() {
	long long int a[1000010]={}, n, m, start, end=0, mid, max=0, c, i;
	
	scanf("%lld %lld", &n, &m);
	for(i=0; i<n; i++) {
		scanf("%lld", &a[i]);
		if(end<a[i]) {
			end=a[i];
		}
	}
	start=1, mid=(start+end)/2;;
	while(start<=end) {
		c=0;
		mid=(start+end)/2;
		for(i=0; i<n; i++) {
			if(a[i]>mid) {
				c+=a[i]-mid;
			}
		}
		if(c>=m) {
			start=mid+1;
			if(mid>max) {
				max=mid;
			}
		} else {
			end=mid-1;
		}
	}
	printf("%lld", max);
	
	return 0;
}

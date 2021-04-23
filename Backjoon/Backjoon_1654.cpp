#include <iostream>

int main() {
	long long int a[10010]={}, n, k, start, end=0, mid, max=0, r, c, i;
	
	scanf("%lld %lld", &n, &k);
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
			c+=a[i]/mid;
		}
		if(c>=k) {
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

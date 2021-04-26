#include <iostream>

int main() {
	int a[505][505]={}, n, m, b, max=0, min=256, min_sec=2147483647, max_len=-1, i, j, l;
	
	scanf("%d %d %d", &n, &m, &b);
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			scanf("%d", &a[i][j]);
			if(a[i][j]>max) {
				max=a[i][j];
			}
			if(a[i][j]<min) {
				min=a[i][j];
			}
		}
	}
	for(l=min; l<=max; l++) {
		int sec=0, tmp_b=b;
		for(i=0; i<n; i++) {
			for(j=0; j<m; j++) {
				if(a[i][j]<l) {
					tmp_b-=(l-a[i][j]);
					sec+=(l-a[i][j]);
				} else if(a[i][j]==l) {
					continue;
				} else {
					tmp_b+=(a[i][j]-l);
					sec+=(a[i][j]-l)*2;
				}
			}
		}
		if(sec<=min_sec && tmp_b>=0) {
			if(max_len<l) {
				max_len=l;
				min_sec=sec;
			}
		}
	}
	printf("%d %d", min_sec, max_len);
	
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int a[51][51], n, m, min=100000000, w, b, i, j, p, q;
	char t[51];
	
	scanf("%d %d\n", &n, &m);
	for(i=0; i<n; i++) {
		cin >> t;
		for(j=0; j<m; j++) {
			if(t[j]=='W') {
				a[i][j]=1;
			} else {
				a[i][j]=0;
			}
		}
	}
	for(p=0; p<=n-8; p++) {
		for(q=0; q<=m-8; q++) {
			w=0, b=0;
			for(i=0; i<8; i++) {
				for(j=0; j<8; j++) {
					if((p+i)%2==0) {
						if((q+j)%2==0) {
							if(a[p+i][q+j]==0) {
								w++;
							} else {
								b++;
							}
						} else {
							if(a[p+i][q+j]==1) {
								w++;
							} else {
								b++;
							}
						}
					} else {
						if((q+j)%2==0) {
							if(a[p+i][q+j]==1) {
								w++;
							}  else {
								b++;
							}
						} else {
							if(a[p+i][q+j]==0) {
								w++;
							}  else {
								b++;
							}
						}
					}
				}
			}
			if(min>w) {
				min=w;
			}
			if(min>b) {
				min=b;
			}
		}
	}
	printf("%d", min);
	
	return 0;
}

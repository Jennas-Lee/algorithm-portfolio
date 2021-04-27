#include <iostream>
#include <cstdlib>
#include <string>
#include <deque>

using namespace std;

int main() {
	int t, n, tn, i, j, k;
	string p, a;
	
	scanf("%d", &t);
	for(i=0; i<t; i++) {
		deque<int> dq;
		char t[4];
		
		cin >> p;
		scanf("%d", &n);
		cin >> a;
		
		int as=a.size(), ps=p.size(), dqs, r=1;
		k=0;
		for(j=0; j<as; j++) {
			if(n==0) {
				break;
			}
			if(a[j]=='[') {
				continue;
			} else if(a[j]==',' || a[j]==']') {
				k=0;
				dq.push_back(atoi(t));
				fill_n(t, 4, '\0');
			} else {
				t[k]=a[j];
				k++;
			}
		}
		
		for(j=0; j<ps; j++) {
			if(p[j]=='R') {
				r*=-1;
			} else {
				if(dq.size()>0) {
					if(r>0) {
						dq.pop_front();
					} else {
						dq.pop_back();
					}
				} else {
					r=0;
					break;
				}
			}
		}
		
		if(r==0) {
			printf("error\n");
		} else {
			dqs=dq.size();
			for(j=1; j<=dqs+2; j++) {
				if(j==1) {
					printf("[");
					continue;
				} else if(j==dqs+2) {
					printf("]\n");
					break;
				} else {
					if(r>0) {
						tn=dq.front();
						dq.pop_front();
					} else {
						tn=dq.back();
						dq.pop_back();
					}
					if(j==dqs+1) {
						printf("%d", tn);
					} else {
						printf("%d,", tn);
					}
				}
			}
		}
	}
	
	return 0;
}

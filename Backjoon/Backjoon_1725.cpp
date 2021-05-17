#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, m, a[100010], r=0, h, w, i;
	stack<int> s;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++) {
		while(!s.empty() && a[s.top()]>a[i]) {
			h=a[s.top()], w=i;
			s.pop();
			if(!s.empty()) {
				w=i-s.top()-1;
			}
			if(r<w*h) {
				r=w*h;
			}
		}
		s.push(i);
	}
	while(!s.empty()) {
		h=a[s.top()], w=i;
		s.pop();
		if(!s.empty()) {
			w=i-s.top()-1;
		}
		if(r<w*h) {
			r=w*h;
		}
	}
	printf("%d", r);
	
	return 0;
}

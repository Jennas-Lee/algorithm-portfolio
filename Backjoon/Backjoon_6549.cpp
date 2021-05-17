#include <iostream>
#include <stack>

typedef long long ll;

using namespace std;

int main() {
	while(1) {
		ll n, m, a[100010], r=0, h, w, i;
		stack<ll> s;
		
		scanf("%lld", &n);
		if(n==0) {
			return 0;
		}
		for(i=0; i<n; i++) {
			scanf("%lld", &a[i]);
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
		printf("%lld\n", r);
	}
	
	
	return 0;
}

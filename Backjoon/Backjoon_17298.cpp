#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int a[1000010];

int main() {
	stack<pair<int, int> > s;
	int n, m, i;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		a[i]=-1;
	}
	for(i=0; i<n; i++) {
		scanf("%d", &m);
		if(s.size()==0 || s.top().second>=m) {
			s.push(make_pair(i, m));
		} else {
			while(!s.empty() && s.top().second<m) {
				a[s.top().first] = m;
				s.pop();
			}
			s.push(make_pair(i, m));
		}
	}
	
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	

    return 0;
}

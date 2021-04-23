#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, m, t, i;
	vector<int> a;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &t);
		a.push_back(t);
	}
	sort(a.begin(), a.end());
	scanf("%d", &m);
	for(i=0; i<m; i++) {
		scanf("%d", &t);
		printf("%d ", upper_bound(a.begin(), a.end(), t)-lower_bound(a.begin(), a.end(), t));
	}
	
	return 0;
}

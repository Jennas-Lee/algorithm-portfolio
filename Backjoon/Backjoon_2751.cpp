#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, i;
	vector<int> a;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &m);
		a.push_back(m);
	}
	sort(a.begin(), a.end());
	for(i=0; i<n; i++) {
		printf("%d\n", a[i]);
	}
	
	return 0;
}

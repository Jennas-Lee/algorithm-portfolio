#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, t, i;
	vector<int> a;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &t);
		a.push_back(t);
	}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	for(i=0; i<a.size(); i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}

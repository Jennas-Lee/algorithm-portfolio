#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, m, t, i;
	vector<int> arr;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &t);
		arr.push_back(t);
	}
	sort(arr.begin(), arr.end());
	scanf("%d", &m);
	for(i=0; i<m; i++) {
		scanf("%d", &t);
		printf("%d ", binary_search(arr.begin(), arr.end(), t));
	}
	
	return 0;
}

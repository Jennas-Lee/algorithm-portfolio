#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, t, i;
	vector<int> arr;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &t);
		arr.push_back(t);
	}
	sort(arr.begin(), arr.end(), greater<int>());
	for(i=0; i<n; i++) {
		printf("%d\n", arr[i]);
	}
	
	return 0;
}

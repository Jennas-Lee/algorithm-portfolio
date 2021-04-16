#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
	if(a.second==b.second) {
		return a.first<b.first;
	} else {
		return a.second<b.second;
	}
}

int main() {
	int n, a, b, i;
	vector<pair<int, int> > arr;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		arr.push_back(make_pair(a, b));
	}
	sort(arr.begin(), arr.end(), compare);
	for(i=0; i<n; i++) {
		printf("%d %d\n", arr[i].first, arr[i].second);
	}
	
	
	return 0;
}

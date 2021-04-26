#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if(a.second == b.second) {
		return a.first < b.first;
	} else {
		return a.second > b.second;
	}
}

int main() {
	int n, a[500010], mode_num, max=-4000, min=4000, i;
	double sum=0;
	pair<int, int> mode[8010];
	
	for(i=0; i<=8000; i++) {
		mode[i].first=i-4000;
		mode[i].second=0;
	}
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
		sum+=a[i];
		mode[a[i]+4000].second=mode[a[i]+4000].second+1;
		if(a[i]>max) {
			max=a[i];
		}
		if(a[i]<min) {
			min=a[i];
		}
	}
	sort(a, a+n);
	stable_sort(mode, mode+8010, compare);
	if(mode[0].second==mode[1].second) {
		mode_num=mode[1].first;
	} else {
		mode_num=mode[0].first;
	}
	printf("%d\n%d\n%d\n%d", (int)round(sum/n), a[n/2], mode_num, max-min);
	
	return 0;
}

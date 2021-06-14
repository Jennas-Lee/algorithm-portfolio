#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int same_all(int a) {
	return 10000+a*1000;
}

int same_two(int a, int b, int c) {
	int same;
	if(a==b) {
		same=a;
	} else if(b==c) {
		same=b;
	} else {
		same=c;
	}
	
	return 1000+same*100;
}

int all_different(int a, int b, int c) {
	int max_num=max(a, max(b, c));
	
	return max_num*100;
}

int main() {
	int n, a, b, c, i;
	vector<int> arr;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if(a==b && b==c) {
			arr.push_back(same_all(a));
		} else if(a!=b && b!=c && c!=a) {
			arr.push_back(all_different(a, b, c));
		} else {
			arr.push_back(same_two(a, b, c));
		}
	}
	
	printf("%d", *max_element(arr.begin(), arr.end()));
	
	return 0;
}

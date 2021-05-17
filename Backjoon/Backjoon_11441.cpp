#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int init(vector<int> &a, vector<int> &tree, int node, int start, int end) {
	if(start==end) {
		return tree[node]=a[start];
	} else {
		return tree[node]=init(a, tree, node*2, start, (start+end)/2)+init(a, tree, node*2+1, (start+end)/2+1, end);
	}
}

int sum(vector<int> &tree, int node, int start, int end, int left, int right) {
	if(left>end || right<start) {
		return 0;
	}
	if(left<=start && end<=right) {
		return tree[node];
	}
	return sum(tree, node*2, start, (start+end)/2, left, right)+sum(tree, node*2+1, (start+end)/2+1, end, left, right);
}

int main() {
	int n, m, a, b, h, s, i;
	
	scanf("%d", &n);
	vector<int> arr(n);
	h=(int)ceil(log2(n));
	s=(1<<(h+1));
	vector<int> tree(s);
	
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	init(arr, tree, 1, 0, n-1);
	
	scanf("%d", &m);
	for(i=0; i<m; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", sum(tree, 1, 0, n-1, a-1, b-1));
	}
	
	return 0;
}

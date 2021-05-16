#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

ll init(vector<ll> &a, vector<ll> &tree, int node, int start, int end) {
	if(start==end) {
		return tree[node]=a[start];
	} else {
		return tree[node]=min(init(a, tree, node*2, start, (start+end)/2), init(a, tree, node*2+1, (start+end)/2+1, end));
	}
}

ll minf(vector<ll> &tree, int node, int start, int end, int left, int right) {
	if(left>end || right<start) {
		return 0x7fffffff;
	}
	if(left<=start && end<=right) {
		return tree[node];
	}
	return min(minf(tree, node*2, start, (start+end)/2, left, right), minf(tree, node*2+1, (start+end)/2+1, end, left, right));
}

int main() {
	ll n, m, a, b, h, s, i;
	
	scanf("%lld %lld", &n, &m);
	vector<ll> arr(n);
	h=(ll)ceil(log2(n));
	s=(1<<(h+1));
	vector<ll> tree(s);
	
	for(i=0; i<n; i++) {
		scanf("%lld", &arr[i]);
	}
	
	init(arr, tree, 1, 0, n-1);
	
	for(i=0; i<m; i++) {
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", minf(tree, 1, 0, n-1, a-1, b-1));
	}
	
	return 0;
}

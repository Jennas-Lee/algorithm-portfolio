#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

ll minInit(vector<ll> &a, vector<ll> &tree, int node, int start, int end) {
	if(start==end) {
		return tree[node]=a[start];
	} else {
		return tree[node]=min(minInit(a, tree, node*2, start, (start+end)/2), minInit(a, tree, node*2+1, (start+end)/2+1, end));
	}
}

ll maxInit(vector<ll> &a, vector<ll> &tree, int node, int start, int end) {
	if(start==end) {
		return tree[node]=a[start];
	} else {
		return tree[node]=max(maxInit(a, tree, node*2, start, (start+end)/2), maxInit(a, tree, node*2+1, (start+end)/2+1, end));
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

ll maxf(vector<ll> &tree, int node, int start, int end, int left, int right) {
	if(left>end || right<start) {
		return 0;
	}
	if(left<=start && end<=right) {
		return tree[node];
	}
	return max(maxf(tree, node*2, start, (start+end)/2, left, right), maxf(tree, node*2+1, (start+end)/2+1, end, left, right));
}

int main() {
	ll n, m, a, b, h, s, i;
	
	scanf("%lld %lld", &n, &m);
	vector<ll> arr(n);
	h=(ll)ceil(log2(n));
	s=(1<<(h+1));
	vector<ll> minTree(s);
	vector<ll> maxTree(s);
	
	for(i=0; i<n; i++) {
		scanf("%lld", &arr[i]);
	}
	
	minInit(arr, minTree, 1, 0, n-1);
	maxInit(arr, maxTree, 1, 0, n-1);
	
	for(i=0; i<m; i++) {
		scanf("%lld %lld", &a, &b);
		printf("%lld %lld\n", minf(minTree, 1, 0, n-1, a-1, b-1), maxf(maxTree, 1, 0, n-1, a-1, b-1));
	}
	
	return 0;
}

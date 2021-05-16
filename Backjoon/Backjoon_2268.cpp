#include <iostream>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

ll init(vector<ll> &a, vector<ll> &tree, int node, int start, int end) {
	if(start==end) {
		return tree[node]=a[start];
	} else {
		return tree[node]=init(a, tree, node*2, start, (start+end)/2)+init(a, tree, node*2+1, (start+end)/2+1, end);
	}
}

void update(vector<ll> &tree, int node, int start, int end, int index, ll diff) {
	if(index<start || index>end) {
		return;
	}
	tree[node]=tree[node]+diff;
	if(start!=end) {
		update(tree, node*2, start, (start+end)/2, index, diff);
		update(tree, node*2+1, (start+end)/2+1, end, index, diff);
	}
}

ll sum(vector<ll> &tree, int node, int start, int end, int left, int right) {
	if(left>end || right<start) {
		return 0;
	}
	if(left<=start && end<=right) {
		return tree[node];
	}
	return sum(tree, node*2, start, (start+end)/2, left, right)+sum(tree, node*2+1, (start+end)/2+1, end, left, right);
}

int main() {
	ll n, m, a, b, c, d, h, s, i;
	
	scanf("%lld %lld", &n, &m);
	vector<ll> arr(n, 0);
	h=(ll)ceil(log2(n));
	s=(1<<(h+1));
	vector<ll> tree(s);
	
	init(arr, tree, 1, 0, n-1);
	
	for(i=0; i<m; i++) {
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a==1) {
			b-=1;
			d=c-arr[b];
			arr[b]=c;
			update(tree, 1, 0, n-1, b, d);
		} else {
			if(b>c) {
				ll t=b;
				b=c;
				c=t;
			}
			printf("%lld\n", sum(tree, 1, 0, n-1, b-1, c-1));
		}
	}
	
	return 0;
}

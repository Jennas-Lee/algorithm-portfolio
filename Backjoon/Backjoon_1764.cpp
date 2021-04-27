#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
	int n, m, c=0, s, i;
	vector<string> a, r;
	string tmp;
	
	scanf("%d %d", &n, &m);
	for(i=0; i<n+m; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	for(i=1; i<n+m; i++) {
		if(a[i-1]==a[i]) {
			c++;
			r.push_back(a[i]);
		}
	}
	s=r.size();
	printf("%d\n", c);
	for(i=0; i<s; i++) {
		cout << r[i] << "\n";
	}
	
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool comp(string a, string b) {
	return a.length() < b.length();
}

int main() {
	int n, i;
	string t;
	vector<string> a;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		cin >> t;
		a.push_back(t);
	}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	stable_sort(a.begin(), a.end(), comp);
	for(i=0; i<a.size(); i++) {
		cout << a[i] << "\n";
	}
	
	return 0;
}

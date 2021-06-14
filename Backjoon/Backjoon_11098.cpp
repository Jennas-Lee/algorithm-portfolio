#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, p, c, i, j;
	string s;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &p);
		vector<int> cv;
		vector<string> sv;
		for(j=0; j<p; j++) {
			cin >> c >> s;
			cv.push_back(c);
			sv.push_back(s);
		}
		cout << sv[max_element(cv.begin(), cv.end())-cv.begin()] << "\n";
	}
	
	return 0;
}

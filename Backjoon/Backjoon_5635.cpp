#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, y, m, d, t, i;
	string s;
	vector<int> cv;
	vector<string> sv;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		cin >> s >> d >> m >> y;
		t=y*12*360+m*360+d;
		cv.push_back(t);
		sv.push_back(s);
	}
	cout << sv[max_element(cv.begin(), cv.end())-cv.begin()] << "\n";
	cout << sv[min_element(cv.begin(), cv.end())-cv.begin()];
	
	return 0;
}

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string before, after;
	
	cin >> before;
	after=before;
	
	reverse(after.begin(), after.end());
	
	if(before==after) {
		printf("1");
	} else {
		printf("0");
	}
	
	return 0;
}

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	char arr[11]={};
	
	scanf("%s", arr);
	sort(arr, arr+strlen(arr), greater<int>());
	printf("%s", arr);
	
	return 0;
}

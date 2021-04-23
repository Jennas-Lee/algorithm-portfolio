#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
	deque<int> d;
	int n, t, i;
	string q;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		cin >> q;
		if(q=="push_front") {
			scanf("%d", &t);
			d.push_front(t);
		} else if(q=="push_back") {
			scanf("%d", &t);
			d.push_back(t);
		} else if(q=="pop_front") {
			if(d.empty()==1) {
				printf("-1\n");
			} else {
				printf("%d\n", d.front());
				d.pop_front();
			}
		} else if(q=="pop_back") {
			if(d.empty()==1) {
				printf("-1\n");
			} else {
				printf("%d\n", d.back());
				d.pop_back();
			}
		} else if(q=="size") {
			printf("%d\n", d.size());
		} else if(q=="empty") {
			printf("%d\n", d.empty());
		} else if(q=="front") {
			if(d.empty()==1) {
				printf("-1\n");
			} else {
				printf("%d\n", d.front());
			}
		} else if(q=="back") {
			if(d.empty()==1) {
				printf("-1\n");
			} else {
				printf("%d\n", d.back());
			}
		}
	}
	
	return 0;
}

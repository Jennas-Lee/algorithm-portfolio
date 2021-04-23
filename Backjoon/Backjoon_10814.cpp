#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>

typedef struct {
	int age;
	char name[101];
} Person;

using namespace std;

bool comp(const Person &a, const Person &b) {
	return a.age < b.age;
}

int main() {
	int n, tmp_age, i;
	char tmp_name[101];
	Person tmp_struct;
	vector<Person> a;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		cin >> tmp_age >> tmp_name;
		tmp_struct.age = tmp_age;
		strcpy(tmp_struct.name, tmp_name);
		a.push_back(tmp_struct);
	}
	stable_sort(a.begin(), a.end(), comp);
	
	for(i=0; i<n; i++) {
		printf("%d %s\n", a[i].age, a[i].name);
	}	
	
	return 0;
}

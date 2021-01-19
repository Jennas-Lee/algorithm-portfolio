#include <iostream>
#include <string>

using namespace std;

int main() {
    int r=0, e, i;
    string s;

    getline(cin, s);
    e=s.size();
    if(e==1 && s.at(0)==' ') {
    	printf("0");
	} else {
		for(i=0; i<e; i++) {
        	if(i!=0 && i!=(e-1) && s.at(i)==' ') {
            r++;
	        }
	    }
	    printf("%d", r+1);
    }

    return 0;
}
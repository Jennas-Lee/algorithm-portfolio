#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string s;
	int n[1010]={}, n2[1010]={}, r[1010]={}, t, nl, n2l, c=0, i, j=0;
	
	cin >> s;
	nl=n2l=s.length();
	reverse(s.begin(), s.end());
	for(i=0; i<nl; i++) {
		if(s[i]=='0') {
			n[i+4]=0;
			n2[i]=0;
		} else {
			n[i+4]=1;
			n2[i]=1;
		}
	}
	
	nl+=4;
	for(i=0; i<nl; i++, j++) {
		n[i]+=c;
		if(n[i]+n2[i]>=2) {
			c=1;
			r[j]=n[i]+n2[i]-2;
		} else {
			c=0;
			r[j]=n[i]+n2[i];
		}
	}
	if(c==1) {
		r[j++]=1;
	}
	
	for(i=j-1; i>=0; i--) {
		printf("%d", r[i]);
	}
	
	return 0;
}

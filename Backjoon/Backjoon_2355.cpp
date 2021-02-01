#include <iostream>

typedef long long int ll;

void swap(ll &a, ll &b) {
    ll t=a;
    a=b;
    b=t;
}

int main() {
    ll a, b;

    scanf("%lld %lld", &a, &b);
    if(b>a) {
        swap(a, b);
    } else if(a==b) {
    	printf("%lld", a);
    	return 0;
	}
    if(a>0) {
        a=(a*(a+1))/2;
    } else if(a==0) {
        a=0;
    } else {
    	if(b<0) {
    		a+=1;
		}
        a*=-1;
        a=(a*(a+1))/2;
        a*=-1;
    }
    if(b>0) {
    	b-=1;
        b=(b*(b+1))/2;
    } else if(b==0) {
        b=0;
    } else {
        b*=-1;
        b=(b*(b+1))/2;
        b*=-1;
    }
    
	if(a>=0 && b>=0) {
        printf("%lld", a-b);
    } else if(a>=0 && b<0) {
        printf("%lld", a+b);
    } else {
        printf("%lld", b-a);
    }
    

    return 0;
}
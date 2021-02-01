#include <iostream>
#include <cstdlib>

int main() {
    char s[101], t[10];
    int r=0, i=0, j=0;

    scanf("%s", s);
    while(1) {
		if(s[i]==',' || s[i]=='\0') {
            r+=atoi(t);
            for(j=0; j<10; j++) {
                t[j]='\0';
            }
            j=0;
            if(s[i]=='\0') {
            	break;
			}
        } else {
            t[j++]=s[i];
        }
        i++;
    }
    printf("%d", r);

    return 0;
}
#include <iostream>

int main() {
    int a[26]={}, i=0;
    char s[101];

    scanf("%s", s);
    while(s[i]!='\0') {
        a[s[i++]-97]++;
    }

    for(i=0; i<26; i++) {
        printf("%d ", a[i]);
    }
}
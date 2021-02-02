#include <iostream>

int main() {
    int month[12]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30}, x, y, r=0, i;
    char day[7][4]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    scanf("%d %d", &x, &y);
    for(i=0; i<=(x-1); i++) {
    	r+=month[i];
	}
    r+=y;
    printf("%s", day[r%7]);

    return 0;
}
#include <iostream>

int main() {
    int n, hp, mp, attack, defence, ad_hp, ad_mp, ad_attack, ad_defence, i;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d %d %d %d %d %d", &hp, &mp, &attack, &defence, &ad_hp, &ad_mp, &ad_attack, &ad_defence);
        printf("%d\n", ((1*((hp+ad_hp)>0?(hp+ad_hp):1))+(5*((mp+ad_mp)>0?(mp+ad_mp):1))+(2*((attack+ad_attack)>0?(attack+ad_attack):0))+(2*(defence+ad_defence))));
    }

    return 0;
}
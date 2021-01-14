#include <vector>
long long sum(std::vector<int> &a) {
    int i;
    long long int s=0;
    for(i=0; i<a.size(); i++) {
        s+=a[i];
    }

    return s;
}

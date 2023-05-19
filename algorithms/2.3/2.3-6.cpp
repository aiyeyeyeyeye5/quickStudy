#include "iostream"
using namespace std;

static int t = 0;
void binarySearch(int* a,int target,int p,int r);

int main() {
    int a[100];
    for (int i = 0; i < 100; ++i) {
        a[i] = i;
    }
    binarySearch(a,13,0,100);
}

void binarySearch(int* a,int target,int p,int r) {
    int q = (p+r)/2;
    if (a[q] > target) {
        binarySearch(a,target,p,q);
    } else if (a[q] == target) {
        cout<<q<<endl;
    } else {
        binarySearch(a,target,q+1,r);
    }
    t++;
    cout<<t<<endl;
}

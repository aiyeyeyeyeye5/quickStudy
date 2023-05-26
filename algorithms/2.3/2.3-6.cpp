//#include "iostream"
//using namespace std;
//
//void binarySearch(int* a,int target,int p,int r);
//
//int main() {
//    int a[10]{0,3,5,10,15,30,32,38,50,97};
//    binarySearch(a,3,0,10);
//}
//
//void binarySearch(int* a,int target,int p,int r) {
//    int q;
//    if (r>p) {
//       q = (p+r)/2;
//    } else {
//        cout<<-1<<endl;
//        return;
//    }
//    if (a[q] > target) {
//        binarySearch(a,target,p,q);
//    } else if (a[q] == target) {
//        cout<<q<<endl;
//    } else {
//        binarySearch(a,target,q+1,r);
//    }
//}

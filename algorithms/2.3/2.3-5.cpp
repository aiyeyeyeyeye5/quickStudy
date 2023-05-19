//#include "iostream"
//using namespace std;
//
//void read(int* a,int len);
//void insertSort(int* a,int len);
//
//int main() {
//    int a[10000];
//    for (int i = 0; i < 10000; ++i) {
//        a[i] = 10000-i;
//    }
//    read(a,10000);
//    insertSort(a,10000);
//    read(a,10000);
//    return 0;
//}
//
//void read(int* a,int len) {
//    for (int i = 0; i < len; ++i) {
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
//}
//
//void insertSort(int* a,int len) {
//    for (int i = 1; i < len; ++i) {
//        int key = a[i];
//        int j = i-1;
//        while(j >= 0&& a[j] > key) {
//            a[j+1] = a[j];
//            j--;
//        }
//        a[j+1] = key;
//    }
//}
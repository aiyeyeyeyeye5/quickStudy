//#include "iostream"
//using namespace std;
//
//int linearSearch(int* seq,int len,int x);
//
//int main() {
//    int seq[6]{31,41,59,26,41,58},len = 6;
//    int x = 42;
//    cout<<"The position of x is "<<linearSearch(seq,len,x)<<endl;
//    return 0;
//}
//
//int linearSearch(int* seq,int len,int x) {
//    for (int i = 0; i < len; ++i) {
//        if (seq[i]==x) return i;
//        else if (i==len-1) return -1;
//    }
//}
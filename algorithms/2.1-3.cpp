//#include "iostream"
//using namespace std;
//
//int* insertionSort(int* seq,int len);
//void readSeq(int* seq,int len);
//
//int main() {
//    int seq[6]{31,41,59,26,41,58},len = 6;
//    readSeq(seq,len);
//    readSeq(insertionSort(seq,len),len);
//    cout<<"Nice!"<<endl;
//    return 0;
//}
//
//int* insertionSort(int* seq,int len) {
//    for (int i = 1; i < len; ++i) {
//        int key = seq[i];
//        //我们令j指向要插入位置的前一个位置的下标
//        int j = i-1;
//        while(j>=0 && seq[j]<key) {
//            seq[j+1] = seq[j];
//            j--;
//        }
//        //插入key
//        seq[j+1] = key;
//    }
//    return seq;
//}
//
//void readSeq(int* seq,int len) {
//    for (int i = 0; i < len; ++i) {
//        cout<<seq[i]<<" ";
//    }
//    cout<<endl;
//}
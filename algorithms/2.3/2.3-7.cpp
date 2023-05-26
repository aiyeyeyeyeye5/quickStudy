//#include "iostream"
//using namespace std;
//
//void readSeq(int* seq,int len);
//int* insertSort(int* seq,int len);
//
//int main() {
//    int seq[10]{31,41,59,26,41,58,135,123,4,43};
//    readSeq(seq,10);
//    readSeq(insertSort(seq,10),10);
//    return 0;
//}
//
//void readSeq(int* seq,int len) {
//    for (int i = 0; i < len; ++i) {
//        cout<<seq[i]<<" ";
//    }
//    cout<<endl;
//}
//
//int* insertSort(int* seq,int len) {
//    for (int i = 1; i < len; ++i) {
//        int key = seq[i];
//        int r = i,l = 0;
//        while(l < r) {
//            int mid = (l+r)/2;
//            if (seq[mid] > key) {
//                r = mid;
//            } else {
//                l = mid + 1;
//            }
//        }
//        int j = i;
//        while(j > l) {
//            seq[j] = seq[j-1];
//            j--;
//        }
//        seq[l] = key;
//    }
//    return seq;
//}
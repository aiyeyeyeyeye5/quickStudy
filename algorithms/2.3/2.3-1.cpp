//#include "iostream"
//using namespace std;
//
//void read(int* s);
//void merge(int* s,int p,int q,int r);
//void mergeSort(int* s,int p,int r);
//
//int main() {
//    int s[8]{3,41,52,26,38,57,9,49};
//    read(s);
//    mergeSort(s,0,7);
//    read(s);
//    return 0;
//}
//
//void read(int* s) {
//    for (int i = 0; i < 8; ++i) {
//        cout<<s[i]<<" ";
//    }
//    cout<<endl;
//}
//
//void merge(int* s,int p,int q,int r) {
//    int nl = q - p + 1;
//    int nr = r - q;
//    int* L = new int[nl];
//    int* R = new int[nr];
//    for (int i = 0; i < nl; ++i) {
//        L[i] = s[p + i];
//    }
//    for (int i = 0; i < nr; ++i) {
//        R[i] = s[q + i + 1];
//    }
//
//    //开始合并
//    int i = 0,j = 0,k = p;
//    while(i < nl&&j < nr) {
//        if (L[i]<=R[j]) {
//            s[k] = L[i];
//            i++;
//        } else {
//            s[k] = R[j];
//            j++;
//        }
//        k++;
//    }
//    while(i < nl) {
//        s[k] = L[i];
//        i++;
//        k++;
//    }
//    while(j < nr) {
//        s[k] = R[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(int* s,int p,int r) {
//    if (p>=r) return;
//    int q = (p + r)/2;
//    mergeSort(s,p,q);
//    //上面是二分递归，就是将左边的子列进行不断的二分，当二分到1时结束，就会进行下面的代码
//    mergeSort(s,q+1,r);
//    //继续二分，但是这个二分不需要那么多栈，因为是陪着上面的二分进行的
//    merge(s,p,q,r);
//    //可以尝试在上面打结点，一步一步观察数组值的改变
//}